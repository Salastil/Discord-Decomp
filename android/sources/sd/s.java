package sd;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import hc.f0;
import java.util.Map;
import nd.p0;

/* loaded from: classes3.dex */
public final class s extends p0 {
    public final Map H;
    public nc.i I;

    public s(ie.q qVar, nc.r rVar, nc.n nVar, Map map) {
        super(qVar, rVar, nVar);
        this.H = map;
    }

    @Override // nd.p0
    public final Format l(Format format) {
        nc.i iVar;
        nc.i iVar2 = this.I;
        if (iVar2 == null) {
            iVar2 = format.L;
        }
        if (iVar2 != null && (iVar = (nc.i) this.H.get(iVar2.f15039i)) != null) {
            iVar2 = iVar;
        }
        Metadata metadata = format.G;
        Metadata metadata2 = null;
        if (metadata != null) {
            dd.b[] bVarArr = metadata.f5427d;
            int length = bVarArr.length;
            int i5 = 0;
            int i6 = 0;
            while (true) {
                if (i6 >= length) {
                    i6 = -1;
                    break;
                }
                dd.b bVar = bVarArr[i6];
                if ((bVar instanceof id.m) && "com.apple.streaming.transportStreamTimestamp".equals(((id.m) bVar).f10645e)) {
                    break;
                }
                i6++;
            }
            if (i6 != -1) {
                if (length != 1) {
                    dd.b[] bVarArr2 = new dd.b[length - 1];
                    while (i5 < length) {
                        if (i5 != i6) {
                            bVarArr2[i5 < i6 ? i5 : i5 - 1] = bVarArr[i5];
                        }
                        i5++;
                    }
                    metadata2 = new Metadata(bVarArr2);
                }
            }
            if (iVar2 == format.L || metadata != format.G) {
                f0 a = format.a();
                a.f9680n = iVar2;
                a.f9677i = metadata;
                format = new Format(a);
            }
            return super.l(format);
        }
        metadata = metadata2;
        if (iVar2 == format.L) {
        }
        f0 a10 = format.a();
        a10.f9680n = iVar2;
        a10.f9677i = metadata;
        format = new Format(a10);
        return super.l(format);
    }
}
