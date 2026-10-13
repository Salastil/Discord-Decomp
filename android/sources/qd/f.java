package qd;

import android.content.Context;
import android.os.Parcel;
import android.util.SparseArray;
import android.view.ViewParent;
import android.widget.FrameLayout;
import bg.n1;
import bg.p1;
import com.facebook.imageutils.JfifUtil;
import com.google.android.gms.fido.fido2.api.common.PublicKeyCredentialRequestOptions;
import hc.g1;
import java.util.Arrays;
import ke.w;
import kotlin.jvm.internal.ByteCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import qc.u;
import sf.r;
import th.q1;
import th.s;

/* loaded from: classes3.dex */
public final class f implements af.i, uh.g, zm.f {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16830d;

    /* renamed from: e, reason: collision with root package name */
    public Object f16831e;

    public /* synthetic */ f(int i5) {
        this.f16830d = i5;
    }

    @Override // uh.g
    public /* bridge */ /* synthetic */ Object a() {
        return new q1((s) ((uh.f) this.f16831e).a());
    }

    @Override // af.i
    public void accept(Object obj, Object obj2) {
        switch (this.f16830d) {
            case 1:
                qf.b bVar = new qf.b((jg.g) obj2, 1);
                p1 p1Var = (p1) ((n1) obj).o();
                PublicKeyCredentialRequestOptions publicKeyCredentialRequestOptions = (PublicKeyCredentialRequestOptions) this.f16831e;
                Parcel obtain = Parcel.obtain();
                obtain.writeInterfaceToken(p1Var.f2982g);
                int i5 = bg.n.a;
                obtain.writeStrongBinder(bVar);
                if (publicKeyCredentialRequestOptions == null) {
                    obtain.writeInt(0);
                } else {
                    obtain.writeInt(1);
                    publicKeyCredentialRequestOptions.writeToParcel(obtain, 0);
                }
                p1Var.b(2, obtain);
                break;
            case 5:
                r rVar = (r) this.f16831e;
                tf.f fVar = new tf.f((jg.g) obj2, 2);
                tf.d dVar = (tf.d) ((tf.e) obj).o();
                ze.f a = cg.b.a();
                Parcel obtain2 = Parcel.obtain();
                obtain2.writeInterfaceToken("com.google.android.gms.identitycredentials.internal.IIdentityCredentialService");
                int i6 = cg.a.a;
                obtain2.writeStrongBinder(fVar);
                cg.a.b(obtain2, rVar);
                cg.a.b(obtain2, a);
                ((tf.b) dVar).b(10, obtain2);
                break;
            default:
                vf.b bVar2 = (vf.b) this.f16831e;
                vf.a aVar = new vf.a((jg.g) obj2);
                vf.i iVar = (vf.i) ((vf.c) obj).o();
                String str = bVar2.k;
                Parcel r5 = iVar.r();
                int i10 = vf.f.a;
                r5.writeStrongBinder(aVar);
                r5.writeString(str);
                iVar.s(2, r5);
                break;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void b(FrameLayout searchStartPoint) {
        sm.b bVar;
        sm.b bVar2;
        Intrinsics.checkNotNullParameter(searchStartPoint, "self");
        sm.a container = (sm.a) searchStartPoint;
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(searchStartPoint, "searchStartPoint");
        Intrinsics.checkNotNullParameter(searchStartPoint, "searchStartPoint");
        ViewParent parent = searchStartPoint.getParent();
        while (true) {
            bVar = null;
            if (parent == null) {
                bVar2 = null;
                break;
            } else {
                if (parent instanceof sm.b) {
                    bVar2 = (sm.b) parent;
                    break;
                }
                parent = parent.getParent();
            }
        }
        if (bVar2 != null) {
            bVar2.b(container);
            bVar = bVar2;
        }
        this.f16831e = bVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void c(int i5, int i6, qc.k kVar) {
        int i10;
        int i11;
        int i12;
        long j;
        int i13;
        int i14;
        int i15;
        int i16;
        wc.d dVar = (wc.d) this.f16831e;
        wc.e eVar = dVar.f19755b;
        SparseArray sparseArray = dVar.f19757c;
        w wVar = dVar.f19763i;
        w wVar2 = dVar.f19761g;
        int i17 = 1;
        int i18 = 0;
        if (i5 != 161 && i5 != 163) {
            if (i5 == 165) {
                if (dVar.G != 2) {
                    return;
                }
                wc.c cVar = (wc.c) sparseArray.get(dVar.M);
                int i19 = dVar.P;
                w wVar3 = dVar.f19766n;
                if (i19 != 4 || !"V_VP9".equals(cVar.f19727b)) {
                    kVar.u(i6);
                    return;
                } else {
                    wVar3.C(i6);
                    kVar.readFully(wVar3.a, 0, i6);
                    return;
                }
            }
            if (i5 == 16877) {
                dVar.c(i5);
                wc.c cVar2 = dVar.f19773u;
                int i20 = cVar2.f19732g;
                if (i20 != 1685485123 && i20 != 1685480259) {
                    kVar.u(i6);
                    return;
                }
                byte[] bArr = new byte[i6];
                cVar2.N = bArr;
                kVar.readFully(bArr, 0, i6);
                return;
            }
            if (i5 == 16981) {
                dVar.c(i5);
                byte[] bArr2 = new byte[i6];
                dVar.f19773u.f19734i = bArr2;
                kVar.readFully(bArr2, 0, i6);
                return;
            }
            if (i5 == 18402) {
                byte[] bArr3 = new byte[i6];
                kVar.readFully(bArr3, 0, i6);
                dVar.c(i5);
                dVar.f19773u.j = new u(1, 0, 0, bArr3);
                return;
            }
            if (i5 == 21419) {
                Arrays.fill(wVar.a, (byte) 0);
                kVar.readFully(wVar.a, 4 - i6, i6);
                wVar.F(0);
                dVar.f19775w = (int) wVar.v();
                return;
            }
            if (i5 == 25506) {
                dVar.c(i5);
                byte[] bArr4 = new byte[i6];
                dVar.f19773u.k = bArr4;
                kVar.readFully(bArr4, 0, i6);
                return;
            }
            if (i5 != 30322) {
                throw g1.a("Unexpected id: " + i5, null);
            }
            dVar.c(i5);
            byte[] bArr5 = new byte[i6];
            dVar.f19773u.f19745v = bArr5;
            kVar.readFully(bArr5, 0, i6);
            return;
        }
        if (dVar.G == 0) {
            dVar.M = (int) eVar.b(kVar, false, true, 8);
            dVar.N = eVar.f19781c;
            dVar.I = -9223372036854775807L;
            dVar.G = 1;
            wVar2.C(0);
        }
        wc.c cVar3 = (wc.c) sparseArray.get(dVar.M);
        if (cVar3 == null) {
            kVar.u(i6 - dVar.N);
            dVar.G = 0;
            return;
        }
        cVar3.X.getClass();
        if (dVar.G == 1) {
            dVar.i(kVar, 3);
            int i21 = (wVar2.a[2] & 6) >> 1;
            int i22 = 255;
            if (i21 == 0) {
                dVar.K = 1;
                int[] iArr = dVar.L;
                if (iArr == null) {
                    iArr = new int[1];
                } else if (iArr.length < 1) {
                    iArr = new int[Math.max(iArr.length * 2, 1)];
                }
                dVar.L = iArr;
                iArr[0] = (i6 - dVar.N) - 3;
            } else {
                dVar.i(kVar, 4);
                int i23 = (wVar2.a[3] & 255) + 1;
                dVar.K = i23;
                int[] iArr2 = dVar.L;
                if (iArr2 == null) {
                    iArr2 = new int[i23];
                } else if (iArr2.length < i23) {
                    iArr2 = new int[Math.max(iArr2.length * 2, i23)];
                }
                dVar.L = iArr2;
                if (i21 == 2) {
                    int i24 = (i6 - dVar.N) - 4;
                    int i25 = dVar.K;
                    Arrays.fill(iArr2, 0, i25, i24 / i25);
                } else {
                    if (i21 != 1) {
                        if (i21 != 3) {
                            throw g1.a("Unexpected lacing value: " + i21, null);
                        }
                        int i26 = 0;
                        int i27 = 0;
                        int i28 = 4;
                        while (true) {
                            int i29 = dVar.K - i17;
                            if (i26 >= i29) {
                                i10 = i17;
                                i11 = i18;
                                dVar.L[i29] = ((i6 - dVar.N) - i28) - i27;
                                break;
                            }
                            dVar.L[i26] = i18;
                            int i30 = i28 + 1;
                            dVar.i(kVar, i30);
                            if (wVar2.a[i28] == 0) {
                                throw g1.a("No valid varint length mask found", null);
                            }
                            int i31 = i17;
                            int i32 = i18;
                            while (true) {
                                if (i32 >= 8) {
                                    i12 = i18;
                                    j = 0;
                                    i13 = i30;
                                    break;
                                }
                                int i33 = i31 << (7 - i32);
                                i12 = i18;
                                if ((wVar2.a[i28] & i33) != 0) {
                                    i13 = i30 + i32;
                                    dVar.i(kVar, i13);
                                    j = wVar2.a[i28] & i22 & (~i33);
                                    while (i30 < i13) {
                                        j = (j << 8) | (wVar2.a[i30] & i22);
                                        i30++;
                                        i22 = 255;
                                    }
                                    if (i26 > 0) {
                                        j -= (1 << ((i32 * 7) + 6)) - 1;
                                    }
                                } else {
                                    i32++;
                                    i18 = i12;
                                    i22 = 255;
                                }
                            }
                            if (j < -2147483648L || j > 2147483647L) {
                                break;
                            }
                            int i34 = (int) j;
                            int[] iArr3 = dVar.L;
                            if (i26 != 0) {
                                i34 += iArr3[i26 - 1];
                            }
                            iArr3[i26] = i34;
                            i27 += i34;
                            i26++;
                            i28 = i13;
                            i17 = i31;
                            i18 = i12;
                            i22 = 255;
                        }
                        throw g1.a("EBML lacing sample size out of range.", null);
                    }
                    int i35 = 0;
                    int i36 = 0;
                    int i37 = 4;
                    while (true) {
                        i14 = dVar.K - 1;
                        if (i35 >= i14) {
                            break;
                        }
                        dVar.L[i35] = 0;
                        while (true) {
                            i15 = i37 + 1;
                            dVar.i(kVar, i15);
                            int i38 = wVar2.a[i37] & 255;
                            int[] iArr4 = dVar.L;
                            i16 = iArr4[i35] + i38;
                            iArr4[i35] = i16;
                            if (i38 != 255) {
                                break;
                            } else {
                                i37 = i15;
                            }
                        }
                        i36 += i16;
                        i35++;
                        i37 = i15;
                    }
                    dVar.L[i14] = ((i6 - dVar.N) - i37) - i36;
                }
            }
            i10 = 1;
            i11 = 0;
            byte[] bArr6 = wVar2.a;
            dVar.H = dVar.k((bArr6[i10] & 255) | (bArr6[i11] << 8)) + dVar.B;
            dVar.O = (cVar3.f19729d == 2 || (i5 == 163 && (wVar2.a[2] & ByteCompanionObject.MIN_VALUE) == 128)) ? i10 : i11;
            dVar.G = 2;
            dVar.J = i11;
        } else {
            i10 = 1;
        }
        if (i5 == 163) {
            while (true) {
                int i39 = dVar.J;
                if (i39 >= dVar.K) {
                    dVar.G = 0;
                    return;
                } else {
                    dVar.d(cVar3, ((dVar.J * cVar3.f19730e) / 1000) + dVar.H, dVar.O, dVar.l(kVar, cVar3, dVar.L[i39], false), 0);
                    dVar.J++;
                }
            }
        } else {
            while (true) {
                int i40 = dVar.J;
                if (i40 >= dVar.K) {
                    return;
                }
                int[] iArr5 = dVar.L;
                boolean z5 = i10;
                iArr5[i40] = dVar.l(kVar, cVar3, iArr5[i40], z5);
                dVar.J += z5 ? 1 : 0;
            }
        }
    }

    public int d() {
        return ((da.a) this.f16831e).f7457c.k();
    }

    public int e() {
        return ((da.a) this.f16831e).f7457c.q();
    }

    public void f(int i5, long j) {
        wc.d dVar = (wc.d) this.f16831e;
        if (i5 == 20529) {
            if (j == 0) {
                return;
            }
            throw g1.a("ContentEncodingOrder " + j + " not supported", null);
        }
        if (i5 == 20530) {
            if (j == 1) {
                return;
            }
            throw g1.a("ContentEncodingScope " + j + " not supported", null);
        }
        switch (i5) {
            case 131:
                dVar.c(i5);
                dVar.f19773u.f19729d = (int) j;
                return;
            case 136:
                dVar.c(i5);
                dVar.f19773u.V = j == 1;
                return;
            case 155:
                dVar.I = dVar.k(j);
                return;
            case 159:
                dVar.c(i5);
                dVar.f19773u.O = (int) j;
                return;
            case 176:
                dVar.c(i5);
                dVar.f19773u.f19736m = (int) j;
                return;
            case 179:
                dVar.b(i5);
                dVar.C.d(dVar.k(j));
                return;
            case 186:
                dVar.c(i5);
                dVar.f19773u.f19737n = (int) j;
                return;
            case JfifUtil.MARKER_RST7 /* 215 */:
                dVar.c(i5);
                dVar.f19773u.f19728c = (int) j;
                return;
            case 231:
                dVar.B = dVar.k(j);
                return;
            case 238:
                dVar.P = (int) j;
                return;
            case 241:
                if (dVar.E) {
                    return;
                }
                dVar.b(i5);
                dVar.D.d(j);
                dVar.E = true;
                return;
            case 251:
                dVar.Q = true;
                return;
            case 16871:
                dVar.c(i5);
                dVar.f19773u.f19732g = (int) j;
                return;
            case 16980:
                if (j == 3) {
                    return;
                }
                throw g1.a("ContentCompAlgo " + j + " not supported", null);
            case 17029:
                if (j < 1 || j > 2) {
                    throw g1.a("DocTypeReadVersion " + j + " not supported", null);
                }
                return;
            case 17143:
                if (j == 1) {
                    return;
                }
                throw g1.a("EBMLReadVersion " + j + " not supported", null);
            case 18401:
                if (j == 5) {
                    return;
                }
                throw g1.a("ContentEncAlgo " + j + " not supported", null);
            case 18408:
                if (j == 1) {
                    return;
                }
                throw g1.a("AESSettingsCipherMode " + j + " not supported", null);
            case 21420:
                dVar.f19776x = j + dVar.f19769q;
                return;
            case 21432:
                int i6 = (int) j;
                dVar.c(i5);
                if (i6 == 0) {
                    dVar.f19773u.f19746w = 0;
                    return;
                }
                if (i6 == 1) {
                    dVar.f19773u.f19746w = 2;
                    return;
                } else if (i6 == 3) {
                    dVar.f19773u.f19746w = 1;
                    return;
                } else {
                    if (i6 != 15) {
                        return;
                    }
                    dVar.f19773u.f19746w = 3;
                    return;
                }
            case 21680:
                dVar.c(i5);
                dVar.f19773u.f19738o = (int) j;
                return;
            case 21682:
                dVar.c(i5);
                dVar.f19773u.f19740q = (int) j;
                return;
            case 21690:
                dVar.c(i5);
                dVar.f19773u.f19739p = (int) j;
                return;
            case 21930:
                dVar.c(i5);
                dVar.f19773u.U = j == 1;
                return;
            case 21998:
                dVar.c(i5);
                dVar.f19773u.f19731f = (int) j;
                return;
            case 22186:
                dVar.c(i5);
                dVar.f19773u.R = j;
                return;
            case 22203:
                dVar.c(i5);
                dVar.f19773u.S = j;
                return;
            case 25188:
                dVar.c(i5);
                dVar.f19773u.P = (int) j;
                return;
            case 30114:
                dVar.R = j;
                return;
            case 30321:
                dVar.c(i5);
                int i10 = (int) j;
                if (i10 == 0) {
                    dVar.f19773u.f19741r = 0;
                    return;
                }
                if (i10 == 1) {
                    dVar.f19773u.f19741r = 1;
                    return;
                } else if (i10 == 2) {
                    dVar.f19773u.f19741r = 2;
                    return;
                } else {
                    if (i10 != 3) {
                        return;
                    }
                    dVar.f19773u.f19741r = 3;
                    return;
                }
            case 2352003:
                dVar.c(i5);
                dVar.f19773u.f19730e = (int) j;
                return;
            case 2807729:
                dVar.f19770r = j;
                return;
            default:
                switch (i5) {
                    case 21945:
                        dVar.c(i5);
                        int i11 = (int) j;
                        if (i11 == 1) {
                            dVar.f19773u.A = 2;
                            return;
                        } else {
                            if (i11 != 2) {
                                return;
                            }
                            dVar.f19773u.A = 1;
                            return;
                        }
                    case 21946:
                        dVar.c(i5);
                        int c6 = le.b.c((int) j);
                        if (c6 != -1) {
                            dVar.f19773u.f19749z = c6;
                            return;
                        }
                        return;
                    case 21947:
                        dVar.c(i5);
                        dVar.f19773u.f19747x = true;
                        int b10 = le.b.b((int) j);
                        if (b10 != -1) {
                            dVar.f19773u.f19748y = b10;
                            return;
                        }
                        return;
                    case 21948:
                        dVar.c(i5);
                        dVar.f19773u.B = (int) j;
                        return;
                    case 21949:
                        dVar.c(i5);
                        dVar.f19773u.C = (int) j;
                        return;
                    default:
                        return;
                }
        }
    }

    public /* synthetic */ f(int i5, Object obj) {
        this.f16830d = i5;
        this.f16831e = obj;
    }

    public /* synthetic */ f(qf.a aVar, PublicKeyCredentialRequestOptions publicKeyCredentialRequestOptions) {
        this.f16830d = 1;
        this.f16831e = publicKeyCredentialRequestOptions;
    }

    public f(Context context) {
        this.f16830d = 11;
        di.p pVar = new di.p(context);
        this.f16831e = di.n.b(new rj.b(di.n.b(new e4.e(pVar, di.n.b(xh.c.f20460b), new wi.d(pVar, xh.c.f20461c)))));
    }

    public f(da.a animatedDrawableBackend) {
        this.f16830d = 3;
        Intrinsics.checkNotNullParameter(animatedDrawableBackend, "animatedDrawableBackend");
        this.f16831e = animatedDrawableBackend;
    }
}
