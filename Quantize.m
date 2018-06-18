function q=Quantize(in,pad,pbd)
    fid = fopen('llr_quant.txt', 'wt');
    pmax = 2^(pad+pbd) -1;
    pmin = -(2^(pad+pbd));
    temp = round(in*(2^(pbd)));
    temp1=temp;
    temp(temp > pmax) = pmax;     
    temp(temp < pmin) = pmin;
    q = temp/(2^pbd);
    fprintf(fid, '%d\n', temp);
    fclose(fid);
end
