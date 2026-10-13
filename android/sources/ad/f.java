package ad;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class f {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final List f355b;

    public f(int i5, List list) {
        this.a = i5;
        this.f355b = list;
    }

    public h0 a(int i5, e4.m mVar) {
        String str = (String) mVar.f7963e;
        if (i5 != 2) {
            if (i5 == 3 || i5 == 4) {
                return new w(new u(str));
            }
            if (i5 == 21) {
                return new w(new h());
            }
            if (i5 == 27) {
                if (c(4)) {
                    return null;
                }
                return new w(new q(new e4.e(b(mVar)), c(1), c(8)));
            }
            if (i5 == 36) {
                return new w(new s(new e4.e(b(mVar))));
            }
            if (i5 == 89) {
                return new w(new h((List) mVar.f7964i));
            }
            if (i5 != 138) {
                if (i5 == 172) {
                    return new w(new b(str, 1));
                }
                if (i5 == 257) {
                    return new c0(new e4.m("application/vnd.dvb.ait", 2));
                }
                if (i5 == 134) {
                    if (c(16)) {
                        return null;
                    }
                    return new c0(new e4.m("application/x-scte35", 2));
                }
                if (i5 != 135) {
                    switch (i5) {
                        case 15:
                            if (c(2)) {
                                return null;
                            }
                            return new w(new e(false, str));
                        case 16:
                            return new w(new n(new e4.r(b(mVar))));
                        case 17:
                            if (c(2)) {
                                return null;
                            }
                            return new w(new t(str));
                        default:
                            switch (i5) {
                                case IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT /* 128 */:
                                    break;
                                case 129:
                                    break;
                                case 130:
                                    if (!c(64)) {
                                        return null;
                                    }
                                    break;
                                default:
                                    return null;
                            }
                    }
                }
                return new w(new b(str, 0));
            }
            return new w(new g(str));
        }
        return new w(new k(new e4.r(b(mVar))));
    }

    public List b(e4.m mVar) {
        String str;
        int i5;
        boolean c6 = c(32);
        List list = this.f355b;
        if (c6) {
            return list;
        }
        ke.w wVar = new ke.w((byte[]) mVar.f7965v);
        while (wVar.a() > 0) {
            int u5 = wVar.u();
            int u6 = wVar.f13363b + wVar.u();
            if (u5 == 134) {
                ArrayList arrayList = new ArrayList();
                int u10 = wVar.u() & 31;
                for (int i6 = 0; i6 < u10; i6++) {
                    String s2 = wVar.s(3, ei.d.f8100c);
                    int u11 = wVar.u();
                    boolean z5 = (u11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0;
                    if (z5) {
                        i5 = u11 & 63;
                        str = "application/cea-708";
                    } else {
                        str = "application/cea-608";
                        i5 = 1;
                    }
                    byte u12 = (byte) wVar.u();
                    wVar.G(1);
                    List singletonList = z5 ? Collections.singletonList((u12 & 64) != 0 ? new byte[]{1} : new byte[]{0}) : null;
                    hc.f0 f0Var = new hc.f0();
                    f0Var.k = str;
                    f0Var.f9671c = s2;
                    f0Var.C = i5;
                    f0Var.f9679m = singletonList;
                    arrayList.add(new Format(f0Var));
                }
                list = arrayList;
            }
            wVar.F(u6);
        }
        return list;
    }

    public boolean c(int i5) {
        return (i5 & this.a) != 0;
    }

    public f() {
        this.a = 1;
        this.f355b = Collections.singletonList(null);
    }

    public f(ArrayList arrayList) {
        this.a = 0;
        this.f355b = arrayList;
    }
}
