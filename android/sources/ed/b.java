package ed;

import com.google.android.exoplayer2.metadata.Metadata;
import dd.d;
import java.nio.ByteBuffer;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import ke.v;
import ke.w;

/* loaded from: classes3.dex */
public final class b extends nt.a {
    public final /* synthetic */ int a;

    public static fd.a M(w wVar) {
        String p3 = wVar.p();
        p3.getClass();
        String p5 = wVar.p();
        p5.getClass();
        return new fd.a(p3, p5, wVar.o(), wVar.o(), Arrays.copyOfRange(wVar.a, wVar.f13363b, wVar.f13364c));
    }

    @Override // nt.a
    public final Metadata m(d dVar, ByteBuffer byteBuffer) {
        switch (this.a) {
            case 0:
                if (byteBuffer.get() != 116) {
                    return null;
                }
                v vVar = new v(byteBuffer.array(), byteBuffer.limit());
                int i5 = 12;
                vVar.s(12);
                int f2 = (vVar.f() + vVar.i(12)) - 4;
                vVar.s(44);
                vVar.t(vVar.i(12));
                vVar.s(16);
                ArrayList arrayList = new ArrayList();
                while (vVar.f() < f2) {
                    vVar.s(48);
                    int i6 = vVar.i(8);
                    vVar.s(4);
                    int f10 = vVar.f() + vVar.i(i5);
                    String str = null;
                    String str2 = null;
                    while (vVar.f() < f10) {
                        int i10 = vVar.i(8);
                        int i11 = vVar.i(8);
                        int f11 = vVar.f() + i11;
                        if (i10 == 2) {
                            int i12 = vVar.i(16);
                            vVar.s(8);
                            if (i12 == 3) {
                                while (vVar.f() < f11) {
                                    int i13 = vVar.i(8);
                                    Charset charset = ei.d.a;
                                    byte[] bArr = new byte[i13];
                                    vVar.k(bArr, i13);
                                    String str3 = new String(bArr, charset);
                                    int i14 = vVar.i(8);
                                    for (int i15 = 0; i15 < i14; i15++) {
                                        vVar.t(vVar.i(8));
                                    }
                                    str = str3;
                                }
                            }
                        } else if (i10 == 21) {
                            Charset charset2 = ei.d.a;
                            byte[] bArr2 = new byte[i11];
                            vVar.k(bArr2, i11);
                            str2 = new String(bArr2, charset2);
                        }
                        vVar.p(f11 * 8);
                    }
                    vVar.p(f10 * 8);
                    if (str != null && str2 != null) {
                        arrayList.add(new a(i6, str.concat(str2)));
                    }
                    i5 = 12;
                }
                if (arrayList.isEmpty()) {
                    return null;
                }
                return new Metadata(arrayList);
            default:
                return new Metadata(M(new w(byteBuffer.array(), byteBuffer.limit())));
        }
    }
}
