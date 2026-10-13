package v4;

import android.graphics.Rect;
import androidx.collection.SparseArrayCompat;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.ArrayList;
import java.util.HashMap;

/* loaded from: classes.dex */
public abstract class r {
    public static final e4.e a = e4.e.x("w", "h", "ip", "op", "fr", "v", "layers", "assets", "fonts", "chars", "markers");

    /* renamed from: b, reason: collision with root package name */
    public static final e4.e f19259b = e4.e.x(StackTraceHelper.ID_KEY, "layers", "w", "h", "p", "u");

    /* renamed from: c, reason: collision with root package name */
    public static final e4.e f19260c = e4.e.x("list");

    /* renamed from: d, reason: collision with root package name */
    public static final e4.e f19261d = e4.e.x("cm", "tm", "dr");

    public static l4.i a(w4.b bVar) {
        float f2;
        float f10;
        float f11;
        float f12;
        float f13;
        float f14;
        float f15;
        float c6 = x4.h.c();
        s.k kVar = new s.k();
        ArrayList arrayList = new ArrayList();
        HashMap hashMap = new HashMap();
        HashMap hashMap2 = new HashMap();
        HashMap hashMap3 = new HashMap();
        ArrayList arrayList2 = new ArrayList();
        SparseArrayCompat sparseArrayCompat = new SparseArrayCompat(0);
        l4.i iVar = new l4.i();
        bVar.f();
        int i5 = 0;
        int i6 = 0;
        float f16 = 0.0f;
        float f17 = 0.0f;
        float f18 = 0.0f;
        while (bVar.o()) {
            float f19 = c6;
            switch (bVar.P(a)) {
                case 0:
                    i5 = bVar.t();
                    c6 = f19;
                    break;
                case 1:
                    i6 = bVar.t();
                    c6 = f19;
                    break;
                case 2:
                    f2 = f18;
                    f17 = (float) bVar.r();
                    c6 = f19;
                    f18 = f2;
                    break;
                case 3:
                    f18 = ((float) bVar.r()) - 0.01f;
                    c6 = f19;
                    f17 = f17;
                    break;
                case 4:
                    f2 = f18;
                    f16 = (float) bVar.r();
                    c6 = f19;
                    f17 = f17;
                    f18 = f2;
                    break;
                case 5:
                    f10 = f16;
                    f11 = f17;
                    f12 = f18;
                    String[] split = bVar.x().split("\\.");
                    int parseInt = Integer.parseInt(split[0]);
                    int parseInt2 = Integer.parseInt(split[1]);
                    int parseInt3 = Integer.parseInt(split[2]);
                    if (parseInt < 4 || (parseInt <= 4 && (parseInt2 < 4 || (parseInt2 <= 4 && parseInt3 < 0)))) {
                        iVar.a("Lottie only supports bodymovin >= 4.4.0");
                    }
                    c6 = f19;
                    f17 = f11;
                    f18 = f12;
                    f16 = f10;
                    break;
                case 6:
                    f10 = f16;
                    f11 = f17;
                    f12 = f18;
                    bVar.c();
                    int i10 = 0;
                    while (bVar.o()) {
                        t4.e a10 = q.a(bVar, iVar);
                        if (a10.f18197e == 3) {
                            i10++;
                        }
                        arrayList.add(a10);
                        kVar.e(a10.f18196d, a10);
                        if (i10 > 4) {
                            x4.c.b("You have " + i10 + " images. Lottie should primarily be used with shapes. If you are using Adobe Illustrator, convert the Illustrator layers to shape layers.");
                        }
                    }
                    bVar.g();
                    c6 = f19;
                    f17 = f11;
                    f18 = f12;
                    f16 = f10;
                    break;
                case 7:
                    f10 = f16;
                    f11 = f17;
                    f12 = f18;
                    bVar.c();
                    while (bVar.o()) {
                        ArrayList arrayList3 = new ArrayList();
                        s.k kVar2 = new s.k();
                        bVar.f();
                        String str = null;
                        String str2 = null;
                        String str3 = null;
                        int i11 = 0;
                        int i12 = 0;
                        while (bVar.o()) {
                            int P = bVar.P(f19259b);
                            if (P == 0) {
                                str = bVar.x();
                            } else if (P == 1) {
                                bVar.c();
                                while (bVar.o()) {
                                    t4.e a11 = q.a(bVar, iVar);
                                    kVar2.e(a11.f18196d, a11);
                                    arrayList3.add(a11);
                                }
                                bVar.g();
                            } else if (P == 2) {
                                i11 = bVar.t();
                            } else if (P == 3) {
                                i12 = bVar.t();
                            } else if (P == 4) {
                                str2 = bVar.x();
                            } else if (P != 5) {
                                bVar.Q();
                                bVar.R();
                            } else {
                                str3 = bVar.x();
                            }
                        }
                        bVar.i();
                        if (str2 != null) {
                            hashMap2.put(str, new l4.x(i11, str, i12, str2, str3));
                        } else {
                            hashMap.put(str, arrayList3);
                        }
                    }
                    bVar.g();
                    c6 = f19;
                    f17 = f11;
                    f18 = f12;
                    f16 = f10;
                    break;
                case 8:
                    f10 = f16;
                    f11 = f17;
                    float f20 = f18;
                    bVar.f();
                    while (bVar.o()) {
                        if (bVar.P(f19260c) != 0) {
                            bVar.Q();
                            bVar.R();
                        } else {
                            bVar.c();
                            while (bVar.o()) {
                                e4.e eVar = k.a;
                                bVar.f();
                                String str4 = null;
                                String str5 = null;
                                String str6 = null;
                                while (bVar.o()) {
                                    int P2 = bVar.P(k.a);
                                    if (P2 != 0) {
                                        float f21 = f20;
                                        if (P2 == 1) {
                                            str5 = bVar.x();
                                        } else if (P2 == 2) {
                                            str6 = bVar.x();
                                        } else if (P2 != 3) {
                                            bVar.Q();
                                            bVar.R();
                                        } else {
                                            bVar.r();
                                        }
                                        f20 = f21;
                                    } else {
                                        str4 = bVar.x();
                                    }
                                }
                                bVar.i();
                                hashMap3.put(str5, new q4.c(str4, str5, str6));
                                f20 = f20;
                            }
                            bVar.g();
                        }
                    }
                    f12 = f20;
                    bVar.i();
                    c6 = f19;
                    f17 = f11;
                    f18 = f12;
                    f16 = f10;
                    break;
                case 9:
                    f10 = f16;
                    f11 = f17;
                    f13 = f18;
                    bVar.c();
                    while (bVar.o()) {
                        e4.e eVar2 = j.a;
                        ArrayList arrayList4 = new ArrayList();
                        bVar.f();
                        double d6 = 0.0d;
                        String str7 = null;
                        String str8 = null;
                        char c8 = 0;
                        while (bVar.o()) {
                            int P3 = bVar.P(j.a);
                            if (P3 == 0) {
                                c8 = bVar.x().charAt(0);
                            } else if (P3 == 1) {
                                bVar.r();
                            } else if (P3 == 2) {
                                d6 = bVar.r();
                            } else if (P3 == 3) {
                                str7 = bVar.x();
                            } else if (P3 == 4) {
                                str8 = bVar.x();
                            } else if (P3 != 5) {
                                bVar.Q();
                                bVar.R();
                            } else {
                                bVar.f();
                                while (bVar.o()) {
                                    if (bVar.P(j.f19251b) != 0) {
                                        bVar.Q();
                                        bVar.R();
                                    } else {
                                        bVar.c();
                                        while (bVar.o()) {
                                            arrayList4.add((s4.n) g.a(bVar, iVar));
                                        }
                                        bVar.g();
                                    }
                                }
                                bVar.i();
                            }
                        }
                        bVar.i();
                        q4.d dVar = new q4.d(arrayList4, c8, d6, str7, str8);
                        sparseArrayCompat.e(dVar.hashCode(), dVar);
                    }
                    bVar.g();
                    f12 = f13;
                    c6 = f19;
                    f17 = f11;
                    f18 = f12;
                    f16 = f10;
                    break;
                case 10:
                    bVar.c();
                    while (bVar.o()) {
                        bVar.f();
                        String str9 = null;
                        float f22 = 0.0f;
                        float f23 = 0.0f;
                        while (bVar.o()) {
                            int P4 = bVar.P(f19261d);
                            if (P4 != 0) {
                                f14 = f16;
                                if (P4 == 1) {
                                    f15 = f17;
                                    f18 = f18;
                                    f22 = (float) bVar.r();
                                } else if (P4 != 2) {
                                    bVar.Q();
                                    bVar.R();
                                } else {
                                    f15 = f17;
                                    f18 = f18;
                                    f23 = (float) bVar.r();
                                }
                                f16 = f14;
                                f17 = f15;
                            } else {
                                f14 = f16;
                                str9 = bVar.x();
                            }
                            f16 = f14;
                        }
                        bVar.i();
                        arrayList2.add(new q4.h(str9, f22, f23));
                        f18 = f18;
                        f17 = f17;
                        f16 = f16;
                    }
                    f10 = f16;
                    f11 = f17;
                    f13 = f18;
                    bVar.g();
                    f12 = f13;
                    c6 = f19;
                    f17 = f11;
                    f18 = f12;
                    f16 = f10;
                    break;
                default:
                    bVar.Q();
                    bVar.R();
                    f10 = f16;
                    f11 = f17;
                    f12 = f18;
                    c6 = f19;
                    f17 = f11;
                    f18 = f12;
                    f16 = f10;
                    break;
            }
        }
        float f24 = c6;
        Rect rect = new Rect(0, 0, (int) (i5 * f24), (int) (i6 * f24));
        float c10 = x4.h.c();
        iVar.k = rect;
        iVar.f13750l = f17;
        iVar.f13751m = f18;
        iVar.f13752n = f16;
        iVar.j = arrayList;
        iVar.f13749i = kVar;
        iVar.f13743c = hashMap;
        iVar.f13744d = hashMap2;
        iVar.f13745e = c10;
        iVar.f13748h = sparseArrayCompat;
        iVar.f13746f = hashMap3;
        iVar.f13747g = arrayList2;
        return iVar;
    }
}
