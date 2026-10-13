package kf;

import android.os.Parcel;
import android.os.Parcelable;
import android.os.ResultReceiver;
import android.view.ViewGroup;
import androidx.versionedparcelable.ParcelImpl;
import bg.w0;
import com.google.android.gms.fido.common.Transport;
import com.google.android.gms.fido.fido2.api.common.AuthenticationExtensions;
import com.google.android.gms.fido.fido2.api.common.PublicKeyCredentialRequestOptions;
import java.util.ArrayList;
import java.util.Locale;
import l4.e;
import nc.h;
import nc.i;
import oe.g;
import rf.a0;
import rf.b0;
import rf.c;
import rf.d0;
import rf.e0;
import rf.f;
import rf.h0;
import rf.j;
import rf.l;
import rf.m0;
import rf.n0;
import rf.o0;
import rf.p0;
import rf.q0;
import rf.r0;
import rf.s;
import rf.t;
import rf.u;
import rf.v;
import rf.w;
import rf.x;
import rf.y;
import rf.z;
import rf.z0;
import ys.d;

/* loaded from: classes3.dex */
public final class b implements Parcelable.Creator {
    public final /* synthetic */ int a;

    public /* synthetic */ b(int i5) {
        this.a = i5;
    }

    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        switch (this.a) {
            case 0:
                int g02 = d.g0(parcel);
                int i5 = 0;
                while (parcel.dataPosition() < g02) {
                    int readInt = parcel.readInt();
                    if (((char) readInt) != 1) {
                        d.e0(readInt, parcel);
                    } else {
                        i5 = d.V(readInt, parcel);
                    }
                }
                d.G(g02, parcel);
                return new a(i5);
            case 1:
                e eVar = new e(parcel);
                eVar.f13714d = parcel.readString();
                eVar.f13716i = parcel.readFloat();
                eVar.f13717v = parcel.readInt() == 1;
                eVar.f13718w = parcel.readString();
                eVar.f13719x = parcel.readInt();
                eVar.f13720y = parcel.readInt();
                return eVar;
            case 2:
                return new ld.a(parcel);
            case 3:
                return new md.b(parcel);
            case 4:
                return new i(parcel);
            case 5:
                return new h(parcel);
            case 6:
                return new ParcelImpl(parcel);
            case 7:
                oe.e eVar2 = new oe.e(-2, -2);
                eVar2.f15846w = 0.0f;
                eVar2.f15847x = 1.0f;
                eVar2.f15848y = -1;
                eVar2.E = -1.0f;
                eVar2.H = 16777215;
                eVar2.I = 16777215;
                eVar2.f15846w = parcel.readFloat();
                eVar2.f15847x = parcel.readFloat();
                eVar2.f15848y = parcel.readInt();
                eVar2.E = parcel.readFloat();
                eVar2.F = parcel.readInt();
                eVar2.G = parcel.readInt();
                eVar2.H = parcel.readInt();
                eVar2.I = parcel.readInt();
                eVar2.J = parcel.readByte() != 0;
                ((ViewGroup.MarginLayoutParams) eVar2).bottomMargin = parcel.readInt();
                ((ViewGroup.MarginLayoutParams) eVar2).leftMargin = parcel.readInt();
                ((ViewGroup.MarginLayoutParams) eVar2).rightMargin = parcel.readInt();
                ((ViewGroup.MarginLayoutParams) eVar2).topMargin = parcel.readInt();
                ((ViewGroup.MarginLayoutParams) eVar2).height = parcel.readInt();
                ((ViewGroup.MarginLayoutParams) eVar2).width = parcel.readInt();
                return eVar2;
            case 8:
                g gVar = new g();
                gVar.f15857d = parcel.readInt();
                gVar.f15858e = parcel.readInt();
                return gVar;
            case 9:
                og.b bVar = new og.b();
                bVar.F = 255;
                bVar.H = -2;
                bVar.I = -2;
                bVar.J = -2;
                bVar.Q = Boolean.TRUE;
                bVar.f15869d = parcel.readInt();
                bVar.f15870e = (Integer) parcel.readSerializable();
                bVar.f15871i = (Integer) parcel.readSerializable();
                bVar.f15872v = (Integer) parcel.readSerializable();
                bVar.f15873w = (Integer) parcel.readSerializable();
                bVar.f15874x = (Integer) parcel.readSerializable();
                bVar.f15875y = (Integer) parcel.readSerializable();
                bVar.E = (Integer) parcel.readSerializable();
                bVar.F = parcel.readInt();
                bVar.G = parcel.readString();
                bVar.H = parcel.readInt();
                bVar.I = parcel.readInt();
                bVar.J = parcel.readInt();
                bVar.L = parcel.readString();
                bVar.M = parcel.readString();
                bVar.N = parcel.readInt();
                bVar.P = (Integer) parcel.readSerializable();
                bVar.R = (Integer) parcel.readSerializable();
                bVar.S = (Integer) parcel.readSerializable();
                bVar.T = (Integer) parcel.readSerializable();
                bVar.U = (Integer) parcel.readSerializable();
                bVar.V = (Integer) parcel.readSerializable();
                bVar.W = (Integer) parcel.readSerializable();
                bVar.Z = (Integer) parcel.readSerializable();
                bVar.X = (Integer) parcel.readSerializable();
                bVar.Y = (Integer) parcel.readSerializable();
                bVar.Q = (Boolean) parcel.readSerializable();
                bVar.K = (Locale) parcel.readSerializable();
                bVar.a0 = (Boolean) parcel.readSerializable();
                bVar.f15868b0 = (Integer) parcel.readSerializable();
                return bVar;
            case 10:
                try {
                    return Transport.a(parcel.readString());
                } catch (pf.a e9) {
                    throw new RuntimeException(e9);
                }
            case 11:
                try {
                    return c.a(parcel.readString());
                } catch (rf.b e10) {
                    throw new RuntimeException(e10);
                }
            case 12:
                int g03 = d.g0(parcel);
                boolean z5 = false;
                while (parcel.dataPosition() < g03) {
                    int readInt2 = parcel.readInt();
                    if (((char) readInt2) != 1) {
                        d.e0(readInt2, parcel);
                    } else {
                        z5 = d.T(readInt2, parcel);
                    }
                }
                d.G(g03, parcel);
                return new z0(z5);
            case 13:
                int g04 = d.g0(parcel);
                long j = 0;
                while (parcel.dataPosition() < g04) {
                    int readInt3 = parcel.readInt();
                    if (((char) readInt3) != 1) {
                        d.e0(readInt3, parcel);
                    } else {
                        j = d.X(readInt3, parcel);
                    }
                }
                d.G(g04, parcel);
                return new m0(j);
            case 14:
                int g05 = d.g0(parcel);
                boolean z6 = false;
                while (parcel.dataPosition() < g05) {
                    int readInt4 = parcel.readInt();
                    if (((char) readInt4) != 1) {
                        d.e0(readInt4, parcel);
                    } else {
                        z6 = d.T(readInt4, parcel);
                    }
                }
                d.G(g05, parcel);
                return new n0(z6);
            case 15:
                int g06 = d.g0(parcel);
                boolean z7 = false;
                while (parcel.dataPosition() < g06) {
                    int readInt5 = parcel.readInt();
                    if (((char) readInt5) != 1) {
                        d.e0(readInt5, parcel);
                    } else {
                        z7 = d.T(readInt5, parcel);
                    }
                }
                d.G(g06, parcel);
                return new s(z7);
            case 16:
                int g07 = d.g0(parcel);
                String str = null;
                while (parcel.dataPosition() < g07) {
                    int readInt6 = parcel.readInt();
                    if (((char) readInt6) != 1) {
                        d.e0(readInt6, parcel);
                    } else {
                        str = d.B(readInt6, parcel);
                    }
                }
                d.G(g07, parcel);
                return new o0(str);
            case 17:
                int g08 = d.g0(parcel);
                int i6 = 0;
                byte[] bArr = null;
                byte[] bArr2 = null;
                byte[] bArr3 = null;
                while (parcel.dataPosition() < g08) {
                    int readInt7 = parcel.readInt();
                    char c6 = (char) readInt7;
                    if (c6 == 1) {
                        bArr = d.z(readInt7, parcel);
                    } else if (c6 == 2) {
                        bArr2 = d.z(readInt7, parcel);
                    } else if (c6 == 3) {
                        bArr3 = d.z(readInt7, parcel);
                    } else if (c6 != 4) {
                        d.e0(readInt7, parcel);
                    } else {
                        i6 = d.V(readInt7, parcel);
                    }
                }
                d.G(g08, parcel);
                return new p0(bArr == null ? null : w0.k(bArr, bArr.length), bArr2 == null ? null : w0.k(bArr2, bArr2.length), bArr3 != null ? w0.k(bArr3, bArr3.length) : null, i6);
            case 18:
                int g09 = d.g0(parcel);
                boolean z8 = false;
                while (parcel.dataPosition() < g09) {
                    int readInt8 = parcel.readInt();
                    if (((char) readInt8) != 1) {
                        d.e0(readInt8, parcel);
                    } else {
                        z8 = d.T(readInt8, parcel);
                    }
                }
                d.G(g09, parcel);
                return new t(z8);
            case 19:
                int g010 = d.g0(parcel);
                while (true) {
                    byte[][] bArr4 = null;
                    while (parcel.dataPosition() < g010) {
                        int readInt9 = parcel.readInt();
                        if (((char) readInt9) != 1) {
                            d.e0(readInt9, parcel);
                        } else {
                            int Y = d.Y(readInt9, parcel);
                            int dataPosition = parcel.dataPosition();
                            if (Y == 0) {
                                break;
                            }
                            int readInt10 = parcel.readInt();
                            byte[][] bArr5 = new byte[readInt10][];
                            for (int i10 = 0; i10 < readInt10; i10++) {
                                bArr5[i10] = parcel.createByteArray();
                            }
                            parcel.setDataPosition(dataPosition + Y);
                            bArr4 = bArr5;
                        }
                    }
                    d.G(g010, parcel);
                    return new q0(bArr4);
                    break;
                }
            case 20:
                int g011 = d.g0(parcel);
                y yVar = null;
                b0 b0Var = null;
                byte[] bArr6 = null;
                ArrayList arrayList = null;
                Double d6 = null;
                ArrayList arrayList2 = null;
                l lVar = null;
                Integer num = null;
                h0 h0Var = null;
                String str2 = null;
                AuthenticationExtensions authenticationExtensions = null;
                String str3 = null;
                ResultReceiver resultReceiver = null;
                ArrayList arrayList3 = null;
                while (parcel.dataPosition() < g011) {
                    int readInt11 = parcel.readInt();
                    switch ((char) readInt11) {
                        case 2:
                            yVar = (y) d.A(parcel, readInt11, y.CREATOR);
                            break;
                        case 3:
                            b0Var = (b0) d.A(parcel, readInt11, b0.CREATOR);
                            break;
                        case 4:
                            bArr6 = d.z(readInt11, parcel);
                            break;
                        case 5:
                            arrayList = d.E(parcel, readInt11, x.CREATOR);
                            break;
                        case 6:
                            int Y2 = d.Y(readInt11, parcel);
                            if (Y2 == 0) {
                                d6 = null;
                                break;
                            } else {
                                d.k0(parcel, Y2, 8);
                                d6 = Double.valueOf(parcel.readDouble());
                                break;
                            }
                        case 7:
                            arrayList2 = d.E(parcel, readInt11, w.CREATOR);
                            break;
                        case '\b':
                            lVar = (l) d.A(parcel, readInt11, l.CREATOR);
                            break;
                        case '\t':
                            num = d.W(readInt11, parcel);
                            break;
                        case '\n':
                            h0Var = (h0) d.A(parcel, readInt11, h0.CREATOR);
                            break;
                        case 11:
                            str2 = d.B(readInt11, parcel);
                            break;
                        case '\f':
                            authenticationExtensions = (AuthenticationExtensions) d.A(parcel, readInt11, AuthenticationExtensions.CREATOR);
                            break;
                        case '\r':
                            str3 = d.B(readInt11, parcel);
                            break;
                        case 14:
                            resultReceiver = (ResultReceiver) d.A(parcel, readInt11, ResultReceiver.CREATOR);
                            break;
                        case 15:
                            arrayList3 = d.C(readInt11, parcel);
                            break;
                        default:
                            d.e0(readInt11, parcel);
                            break;
                    }
                }
                d.G(g011, parcel);
                return new v(yVar, b0Var, bArr6, arrayList, d6, arrayList2, lVar, num, h0Var, str2, authenticationExtensions, str3, resultReceiver, arrayList3);
            case 21:
                int g012 = d.g0(parcel);
                String str4 = null;
                String str5 = null;
                byte[] bArr7 = null;
                rf.i iVar = null;
                rf.h hVar = null;
                j jVar = null;
                f fVar = null;
                String str6 = null;
                while (parcel.dataPosition() < g012) {
                    int readInt12 = parcel.readInt();
                    switch ((char) readInt12) {
                        case 1:
                            str4 = d.B(readInt12, parcel);
                            break;
                        case 2:
                            str5 = d.B(readInt12, parcel);
                            break;
                        case 3:
                            bArr7 = d.z(readInt12, parcel);
                            break;
                        case 4:
                            iVar = (rf.i) d.A(parcel, readInt12, rf.i.CREATOR);
                            break;
                        case 5:
                            hVar = (rf.h) d.A(parcel, readInt12, rf.h.CREATOR);
                            break;
                        case 6:
                            jVar = (j) d.A(parcel, readInt12, j.CREATOR);
                            break;
                        case 7:
                            fVar = (f) d.A(parcel, readInt12, f.CREATOR);
                            break;
                        case '\b':
                            str6 = d.B(readInt12, parcel);
                            break;
                        case '\t':
                            d.B(readInt12, parcel);
                            break;
                        default:
                            d.e0(readInt12, parcel);
                            break;
                    }
                }
                d.G(g012, parcel);
                return new u(str4, str5, bArr7, iVar, hVar, jVar, fVar, str6);
            case 22:
                int g013 = d.g0(parcel);
                String str7 = null;
                byte[] bArr8 = null;
                ArrayList arrayList4 = null;
                while (parcel.dataPosition() < g013) {
                    int readInt13 = parcel.readInt();
                    char c8 = (char) readInt13;
                    if (c8 == 2) {
                        str7 = d.B(readInt13, parcel);
                    } else if (c8 == 3) {
                        bArr8 = d.z(readInt13, parcel);
                    } else if (c8 != 4) {
                        d.e0(readInt13, parcel);
                    } else {
                        arrayList4 = d.E(parcel, readInt13, Transport.CREATOR);
                    }
                }
                d.G(g013, parcel);
                return new w(str7, bArr8, arrayList4);
            case 23:
                int g014 = d.g0(parcel);
                String str8 = null;
                Integer num2 = null;
                while (parcel.dataPosition() < g014) {
                    int readInt14 = parcel.readInt();
                    char c10 = (char) readInt14;
                    if (c10 == 2) {
                        str8 = d.B(readInt14, parcel);
                    } else if (c10 != 3) {
                        d.e0(readInt14, parcel);
                    } else {
                        num2 = d.W(readInt14, parcel);
                    }
                }
                d.G(g014, parcel);
                return new x(str8, num2.intValue());
            case 24:
                int g015 = d.g0(parcel);
                byte[] bArr9 = null;
                Double d7 = null;
                String str9 = null;
                ArrayList arrayList5 = null;
                Integer num3 = null;
                h0 h0Var2 = null;
                String str10 = null;
                AuthenticationExtensions authenticationExtensions2 = null;
                Long l6 = null;
                String str11 = null;
                ResultReceiver resultReceiver2 = null;
                while (parcel.dataPosition() < g015) {
                    int readInt15 = parcel.readInt();
                    switch ((char) readInt15) {
                        case 2:
                            bArr9 = d.z(readInt15, parcel);
                            break;
                        case 3:
                            int Y3 = d.Y(readInt15, parcel);
                            if (Y3 == 0) {
                                d7 = null;
                                break;
                            } else {
                                d.k0(parcel, Y3, 8);
                                d7 = Double.valueOf(parcel.readDouble());
                                break;
                            }
                        case 4:
                            str9 = d.B(readInt15, parcel);
                            break;
                        case 5:
                            arrayList5 = d.E(parcel, readInt15, w.CREATOR);
                            break;
                        case 6:
                            num3 = d.W(readInt15, parcel);
                            break;
                        case 7:
                            h0Var2 = (h0) d.A(parcel, readInt15, h0.CREATOR);
                            break;
                        case '\b':
                            str10 = d.B(readInt15, parcel);
                            break;
                        case '\t':
                            authenticationExtensions2 = (AuthenticationExtensions) d.A(parcel, readInt15, AuthenticationExtensions.CREATOR);
                            break;
                        case '\n':
                            int Y4 = d.Y(readInt15, parcel);
                            if (Y4 == 0) {
                                l6 = null;
                                break;
                            } else {
                                d.k0(parcel, Y4, 8);
                                l6 = Long.valueOf(parcel.readLong());
                                break;
                            }
                        case 11:
                            str11 = d.B(readInt15, parcel);
                            break;
                        case '\f':
                            resultReceiver2 = (ResultReceiver) d.A(parcel, readInt15, ResultReceiver.CREATOR);
                            break;
                        default:
                            d.e0(readInt15, parcel);
                            break;
                    }
                }
                d.G(g015, parcel);
                return new PublicKeyCredentialRequestOptions(bArr9, d7, str9, arrayList5, num3, h0Var2, str10, authenticationExtensions2, l6, str11, resultReceiver2);
            case 25:
                int g016 = d.g0(parcel);
                String str12 = null;
                String str13 = null;
                String str14 = null;
                while (parcel.dataPosition() < g016) {
                    int readInt16 = parcel.readInt();
                    char c11 = (char) readInt16;
                    if (c11 == 2) {
                        str12 = d.B(readInt16, parcel);
                    } else if (c11 == 3) {
                        str13 = d.B(readInt16, parcel);
                    } else if (c11 != 4) {
                        d.e0(readInt16, parcel);
                    } else {
                        str14 = d.B(readInt16, parcel);
                    }
                }
                d.G(g016, parcel);
                return new y(str12, str13, str14);
            case 26:
                try {
                    return a0.a(parcel.readString());
                } catch (z e11) {
                    throw new RuntimeException(e11);
                }
            case 27:
                int g017 = d.g0(parcel);
                byte[] bArr10 = null;
                String str15 = null;
                String str16 = null;
                String str17 = null;
                while (parcel.dataPosition() < g017) {
                    int readInt17 = parcel.readInt();
                    char c12 = (char) readInt17;
                    if (c12 == 2) {
                        bArr10 = d.z(readInt17, parcel);
                    } else if (c12 == 3) {
                        str15 = d.B(readInt17, parcel);
                    } else if (c12 == 4) {
                        str16 = d.B(readInt17, parcel);
                    } else if (c12 != 5) {
                        d.e0(readInt17, parcel);
                    } else {
                        str17 = d.B(readInt17, parcel);
                    }
                }
                d.G(g017, parcel);
                return new b0(str15, str16, str17, bArr10);
            case 28:
                String readString = parcel.readString();
                if (readString == null) {
                    readString = "";
                }
                try {
                    return e0.a(readString);
                } catch (d0 e12) {
                    throw new RuntimeException(e12);
                }
            default:
                int g018 = d.g0(parcel);
                String str18 = null;
                while (parcel.dataPosition() < g018) {
                    int readInt18 = parcel.readInt();
                    if (((char) readInt18) != 1) {
                        d.e0(readInt18, parcel);
                    } else {
                        str18 = d.B(readInt18, parcel);
                    }
                }
                d.G(g018, parcel);
                return new r0(str18);
        }
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i5) {
        switch (this.a) {
            case 0:
                return new a[i5];
            case 1:
                return new e[i5];
            case 2:
                return new ld.a[i5];
            case 3:
                return new md.b[i5];
            case 4:
                return new i[i5];
            case 5:
                return new h[i5];
            case 6:
                return new ParcelImpl[i5];
            case 7:
                return new oe.e[i5];
            case 8:
                return new g[i5];
            case 9:
                return new og.b[i5];
            case 10:
                return new Transport[i5];
            case 11:
                return new c[i5];
            case 12:
                return new z0[i5];
            case 13:
                return new m0[i5];
            case 14:
                return new n0[i5];
            case 15:
                return new s[i5];
            case 16:
                return new o0[i5];
            case 17:
                return new p0[i5];
            case 18:
                return new t[i5];
            case 19:
                return new q0[i5];
            case 20:
                return new v[i5];
            case 21:
                return new u[i5];
            case 22:
                return new w[i5];
            case 23:
                return new x[i5];
            case 24:
                return new PublicKeyCredentialRequestOptions[i5];
            case 25:
                return new y[i5];
            case 26:
                return new a0[i5];
            case 27:
                return new b0[i5];
            case 28:
                return new e0[i5];
            default:
                return new r0[i5];
        }
    }
}
