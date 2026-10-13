package sc;

import com.google.android.exoplayer2.Format;
import fi.c0;
import fi.e0;
import fi.p;
import fi.r0;
import fi.y;
import hc.f0;
import java.util.Arrays;
import ke.d0;
import ke.w;

/* loaded from: classes3.dex */
public final class f implements a {
    public final e0 a;

    /* renamed from: b, reason: collision with root package name */
    public final int f17857b;

    public f(int i5, r0 r0Var) {
        this.f17857b = i5;
        this.a = r0Var;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public static f b(int i5, w wVar) {
        a gVar;
        String str;
        int i6;
        int i10 = 4;
        p.c(4, "initialCapacity");
        Object[] objArr = new Object[4];
        int i11 = wVar.f13364c;
        int i12 = 0;
        int i13 = -2;
        int i14 = 0;
        while (wVar.a() > 8) {
            int i15 = wVar.i();
            int i16 = wVar.f13363b + wVar.i();
            wVar.E(i16);
            if (i15 != 1414744396) {
                d dVar = null;
                switch (i15) {
                    case 1718776947:
                        if (i13 == 2) {
                            wVar.G(i10);
                            int i17 = wVar.i();
                            int i18 = wVar.i();
                            wVar.G(i10);
                            int i19 = wVar.i();
                            switch (i19) {
                                case 808802372:
                                case 877677894:
                                case 1145656883:
                                case 1145656920:
                                case 1482049860:
                                case 1684633208:
                                case 2021026148:
                                    str = "video/mp4v-es";
                                    break;
                                case 826496577:
                                case 828601953:
                                case 875967048:
                                    str = "video/avc";
                                    break;
                                case 842289229:
                                    str = "video/mp42";
                                    break;
                                case 859066445:
                                    str = "video/mp43";
                                    break;
                                case 1196444237:
                                case 1735420525:
                                    str = "video/mjpeg";
                                    break;
                                default:
                                    str = null;
                                    break;
                            }
                            if (str != null) {
                                f0 f0Var = new f0();
                                f0Var.f9682p = i17;
                                f0Var.f9683q = i18;
                                f0Var.k = str;
                                gVar = new g(new Format(f0Var));
                                break;
                            } else {
                                com.discord.chat.bridge.botuikit.a.q(i19, "Ignoring track with unsupported compression ", "StreamFormatChunk");
                                gVar = dVar;
                                break;
                            }
                        } else {
                            if (i13 == 1) {
                                int n6 = wVar.n();
                                String str2 = n6 != 1 ? n6 != 85 ? n6 != 255 ? n6 != 8192 ? n6 != 8193 ? null : "audio/vnd.dts" : "audio/ac3" : "audio/mp4a-latm" : "audio/mpeg" : "audio/raw";
                                if (str2 != null) {
                                    int n10 = wVar.n();
                                    int i20 = wVar.i();
                                    wVar.G(6);
                                    int w5 = d0.w(wVar.z());
                                    int n11 = wVar.n();
                                    byte[] bArr = new byte[n11];
                                    wVar.e(bArr, i12, n11);
                                    f0 f0Var2 = new f0();
                                    f0Var2.k = str2;
                                    f0Var2.f9690x = n10;
                                    f0Var2.f9691y = i20;
                                    if ("audio/raw".equals(str2) && w5 != 0) {
                                        f0Var2.f9692z = w5;
                                    }
                                    if ("audio/mp4a-latm".equals(str2) && n11 > 0) {
                                        f0Var2.f9679m = e0.s(bArr);
                                    }
                                    gVar = new g(new Format(f0Var2));
                                    break;
                                } else {
                                    com.discord.chat.bridge.botuikit.a.q(n6, "Ignoring track with unsupported format tag ", "StreamFormatChunk");
                                }
                            } else {
                                ke.b.N("StreamFormatChunk", "Ignoring strf box for unsupported track type: " + d0.B(i13));
                            }
                            gVar = dVar;
                        }
                    case 1751742049:
                        int i21 = wVar.i();
                        wVar.G(8);
                        int i22 = wVar.i();
                        int i23 = wVar.i();
                        wVar.G(i10);
                        wVar.i();
                        wVar.G(12);
                        gVar = new c(i21, i22, i23);
                        break;
                    case 1752331379:
                        int i24 = wVar.i();
                        wVar.G(12);
                        wVar.i();
                        int i25 = wVar.i();
                        int i26 = wVar.i();
                        wVar.G(i10);
                        int i27 = wVar.i();
                        int i28 = wVar.i();
                        wVar.G(8);
                        dVar = new d(i24, i25, i26, i27, i28);
                        gVar = dVar;
                        break;
                    case 1852994675:
                        gVar = new h(wVar.s(wVar.a(), ei.d.f8100c));
                        break;
                    default:
                        gVar = dVar;
                        break;
                }
            } else {
                gVar = b(wVar.i(), wVar);
            }
            if (gVar != null) {
                if (gVar.getType() == 1752331379) {
                    int i29 = ((d) gVar).a;
                    if (i29 == 1935960438) {
                        i13 = 2;
                    } else if (i29 != 1935963489) {
                        if (i29 != 1937012852) {
                            ke.b.N("AviStreamHeaderChunk", "Found unsupported streamType fourCC: " + Integer.toHexString(i29));
                            i6 = -1;
                        } else {
                            i6 = 3;
                        }
                        i13 = i6;
                    } else {
                        i13 = 1;
                    }
                }
                int i30 = i14 + 1;
                if (objArr.length < i30) {
                    objArr = Arrays.copyOf(objArr, y.d(objArr.length, i30));
                }
                objArr[i14] = gVar;
                i14 = i30;
            }
            wVar.F(i16);
            wVar.E(i11);
            i10 = 4;
            i12 = 0;
        }
        return new f(i5, e0.j(i14, objArr));
    }

    public final a a(Class cls) {
        c0 listIterator = this.a.listIterator(0);
        while (listIterator.hasNext()) {
            a aVar = (a) listIterator.next();
            if (aVar.getClass() == cls) {
                return aVar;
            }
        }
        return null;
    }

    @Override // sc.a
    public final int getType() {
        return this.f17857b;
    }
}
