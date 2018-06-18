%function [Output]=ldpc_decoder(llr,H)
%Generate a graph from the given H matrix
H1=H.*llr;
size_H1=size(H1);
row_size = size_H1(1,1);
col_size = size_H1(1,2);
% Expand out to symmetric (M+N)x(M+N) matrix
big_a1 = [zeros(row_size,row_size), H1;
         H1', zeros(col_size,col_size)];     
g1 = graph(big_a1);
m1=sparse(H1');
k10=[g1.Edges.EndNodes];
k10(:,2)=k10(:,2)-row_size;
for i= 0:1823
    k10(i+1,3)=i;
end
k11=sortrows(k10,2);
k12=[];
for i=1:row_size
    k12=[k12,nnz(H(i,:))];
end
k13=[];
for i=1:col_size
    k13=[k13,nnz(H(:,i))];
end
k14=unique(k13);
k15=unique(k12);
% create the first syndrome for layered decoding
llr1=llr;
llr_sign=llr<0;
llr_sign=llr_sign';
syndrome=H*llr_sign;
syndrome=mod(syndrome,2);
%parallel decoding starts
cnt=0;
while( cnt<=100  && nnz(syndrome)~=0)
    k_main=[];
    sign_r=[];
    llr2=zeros(1,col_size);
    x1=g1.Edges.EndNodes;
    k_main=[x1,g1.Edges.Weight]; 
    r1=(sign(g1.Edges.Weight)<0);               %create R matrix
    k_main=[k_main,r1];
    k_main=[k_main,k_main(:,4)+syndrome(k_main(:,1)),mod(k_main(:,4)+syndrome(k_main(:,1)),2)];
    k_main=[k_main,abs(k_main(:,3))];
    % find out the q values for each checking node
    k4=[];
    for it=1:row_size
    k1=k_main(k_main(:,1)==it,:);
    k2=k1(:,7)';
    index_1=find(k2==min(k2));
    k3=min(k2(k2~=k2(1,index_1)));
    k2=((k2-min(k2))>0)*min(k2);
    k2(1,index_1)=k3;
    k2=-(k2'.*(2*k1(:,6)-1));
    k4=[k4;k2];
    end
    
    k_main=[k_main,k4];
    k5=sortrows(k_main,2);
    % find the sum of the variable node weights in the given graph
    for iter=1:col_size 
       k1=k5((k5(:,2)-row_size)==iter,:);
       sum1=sum(k1(:,8));
       llr2(1,iter)=sum1;
    end
    %update the llr and update the graph once again
    llr1=llr1+llr2;
    llr_sign1=llr1<0;
    llr_sign1=llr_sign1';
    syndrome=H*llr_sign1;
    syndrome=mod(syndrome,2);
     if(nnz(syndrome)==0)
         break;
     end
    H1=H.*llr1;
    big_a1 = [zeros(row_size,row_size), H1;
            H1', zeros(col_size,col_size)];     
    g1 = graph(big_a1);
    big_a1=[];
    k_main=[];
    sign_r=[];
    k4=[];
    cnt=cnt+1;
end

% k9=nnz(syndrome);
Output=llr1;
 max_1=max(llr1)
 min_1=min(llr1)
 NNZ=nnz(syndrome)
% %end