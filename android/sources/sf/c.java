package sf;

import android.app.PendingIntent;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.ResultReceiver;
import com.google.android.gms.auth.api.signin.GoogleSignInOptions;
import com.google.android.gms.auth.api.signin.internal.SignInConfiguration;
import com.google.android.gms.identitycredentials.GetCredentialRequest;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class c implements Parcelable.Creator {
    public final /* synthetic */ int a;

    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        switch (this.a) {
            case 0:
                int g02 = ys.d.g0(parcel);
                while (parcel.dataPosition() < g02) {
                    ys.d.e0(parcel.readInt(), parcel);
                }
                ys.d.G(g02, parcel);
                return new b();
            case 1:
                int g03 = ys.d.g0(parcel);
                boolean z5 = false;
                while (parcel.dataPosition() < g03) {
                    int readInt = parcel.readInt();
                    if (((char) readInt) != 1) {
                        ys.d.e0(readInt, parcel);
                    } else {
                        z5 = ys.d.T(readInt, parcel);
                    }
                }
                ys.d.G(g03, parcel);
                return new d(z5);
            case 2:
                int g04 = ys.d.g0(parcel);
                boolean z6 = false;
                while (parcel.dataPosition() < g04) {
                    int readInt2 = parcel.readInt();
                    if (((char) readInt2) != 1) {
                        ys.d.e0(readInt2, parcel);
                    } else {
                        z6 = ys.d.T(readInt2, parcel);
                    }
                }
                ys.d.G(g04, parcel);
                return new e(z6);
            case 3:
                int g05 = ys.d.g0(parcel);
                PendingIntent pendingIntent = null;
                h hVar = null;
                while (parcel.dataPosition() < g05) {
                    int readInt3 = parcel.readInt();
                    char c6 = (char) readInt3;
                    if (c6 == 1) {
                        pendingIntent = (PendingIntent) ys.d.A(parcel, readInt3, PendingIntent.CREATOR);
                    } else if (c6 != 2) {
                        ys.d.e0(readInt3, parcel);
                    } else {
                        hVar = (h) ys.d.A(parcel, readInt3, h.CREATOR);
                    }
                }
                ys.d.G(g05, parcel);
                return new f(pendingIntent, hVar);
            case 4:
                int g06 = ys.d.g0(parcel);
                String str = null;
                Bundle bundle = null;
                Bundle bundle2 = null;
                String str2 = null;
                String str3 = null;
                ResultReceiver resultReceiver = null;
                while (parcel.dataPosition() < g06) {
                    int readInt4 = parcel.readInt();
                    switch ((char) readInt4) {
                        case 1:
                            str = ys.d.B(readInt4, parcel);
                            break;
                        case 2:
                            bundle = ys.d.y(readInt4, parcel);
                            break;
                        case 3:
                            bundle2 = ys.d.y(readInt4, parcel);
                            break;
                        case 4:
                            str2 = ys.d.B(readInt4, parcel);
                            break;
                        case 5:
                            str3 = ys.d.B(readInt4, parcel);
                            break;
                        case 6:
                            resultReceiver = (ResultReceiver) ys.d.A(parcel, readInt4, ResultReceiver.CREATOR);
                            break;
                        default:
                            ys.d.e0(readInt4, parcel);
                            break;
                    }
                }
                ys.d.G(g06, parcel);
                return new g(str, bundle, bundle2, str2, str3, resultReceiver);
            case 5:
                int g07 = ys.d.g0(parcel);
                String str4 = null;
                Bundle bundle3 = null;
                while (parcel.dataPosition() < g07) {
                    int readInt5 = parcel.readInt();
                    char c8 = (char) readInt5;
                    if (c8 == 1) {
                        str4 = ys.d.B(readInt5, parcel);
                    } else if (c8 != 2) {
                        ys.d.e0(readInt5, parcel);
                    } else {
                        bundle3 = ys.d.y(readInt5, parcel);
                    }
                }
                ys.d.G(g07, parcel);
                return new h(str4, bundle3);
            case 6:
                int g08 = ys.d.g0(parcel);
                String str5 = "";
                String str6 = str5;
                String str7 = str6;
                Bundle bundle4 = null;
                Bundle bundle5 = null;
                String str8 = null;
                while (parcel.dataPosition() < g08) {
                    int readInt6 = parcel.readInt();
                    switch ((char) readInt6) {
                        case 1:
                            str5 = ys.d.B(readInt6, parcel);
                            break;
                        case 2:
                            bundle4 = ys.d.y(readInt6, parcel);
                            break;
                        case 3:
                            bundle5 = ys.d.y(readInt6, parcel);
                            break;
                        case 4:
                            str8 = ys.d.B(readInt6, parcel);
                            break;
                        case 5:
                            str6 = ys.d.B(readInt6, parcel);
                            break;
                        case 6:
                            str7 = ys.d.B(readInt6, parcel);
                            break;
                        default:
                            ys.d.e0(readInt6, parcel);
                            break;
                    }
                }
                ys.d.G(g08, parcel);
                return new i(str5, bundle4, bundle5, str8, str6, str7);
            case 7:
                int g09 = ys.d.g0(parcel);
                Bundle bundle6 = null;
                while (parcel.dataPosition() < g09) {
                    int readInt7 = parcel.readInt();
                    if (((char) readInt7) != 1) {
                        ys.d.e0(readInt7, parcel);
                    } else {
                        bundle6 = ys.d.y(readInt7, parcel);
                    }
                }
                ys.d.G(g09, parcel);
                return new j(bundle6);
            case 8:
                int g010 = ys.d.g0(parcel);
                Bundle bundle7 = null;
                while (parcel.dataPosition() < g010) {
                    int readInt8 = parcel.readInt();
                    if (((char) readInt8) != 1) {
                        ys.d.e0(readInt8, parcel);
                    } else {
                        bundle7 = ys.d.y(readInt8, parcel);
                    }
                }
                ys.d.G(g010, parcel);
                return new k(bundle7);
            case 9:
                int g011 = ys.d.g0(parcel);
                ArrayList arrayList = null;
                Bundle bundle8 = null;
                String str9 = null;
                ResultReceiver resultReceiver2 = null;
                while (parcel.dataPosition() < g011) {
                    int readInt9 = parcel.readInt();
                    char c10 = (char) readInt9;
                    if (c10 == 1) {
                        arrayList = ys.d.E(parcel, readInt9, i.CREATOR);
                    } else if (c10 == 2) {
                        bundle8 = ys.d.y(readInt9, parcel);
                    } else if (c10 == 3) {
                        str9 = ys.d.B(readInt9, parcel);
                    } else if (c10 != 4) {
                        ys.d.e0(readInt9, parcel);
                    } else {
                        resultReceiver2 = (ResultReceiver) ys.d.A(parcel, readInt9, ResultReceiver.CREATOR);
                    }
                }
                ys.d.G(g011, parcel);
                return new GetCredentialRequest(arrayList, bundle8, str9, resultReceiver2);
            case 10:
                int g012 = ys.d.g0(parcel);
                Bundle bundle9 = null;
                while (parcel.dataPosition() < g012) {
                    int readInt10 = parcel.readInt();
                    if (((char) readInt10) != 1) {
                        ys.d.e0(readInt10, parcel);
                    } else {
                        bundle9 = ys.d.y(readInt10, parcel);
                    }
                }
                ys.d.G(g012, parcel);
                return new l(bundle9);
            case 11:
                int g013 = ys.d.g0(parcel);
                PendingIntent pendingIntent2 = null;
                while (parcel.dataPosition() < g013) {
                    int readInt11 = parcel.readInt();
                    if (((char) readInt11) != 1) {
                        ys.d.e0(readInt11, parcel);
                    } else {
                        pendingIntent2 = (PendingIntent) ys.d.A(parcel, readInt11, PendingIntent.CREATOR);
                    }
                }
                ys.d.G(g013, parcel);
                return new m(pendingIntent2);
            case 12:
                int g014 = ys.d.g0(parcel);
                PendingIntent pendingIntent3 = null;
                while (parcel.dataPosition() < g014) {
                    int readInt12 = parcel.readInt();
                    if (((char) readInt12) != 1) {
                        ys.d.e0(readInt12, parcel);
                    } else {
                        pendingIntent3 = (PendingIntent) ys.d.A(parcel, readInt12, PendingIntent.CREATOR);
                    }
                }
                ys.d.G(g014, parcel);
                return new n(pendingIntent3);
            case 13:
                int g015 = ys.d.g0(parcel);
                while (parcel.dataPosition() < g015) {
                    ys.d.e0(parcel.readInt(), parcel);
                }
                ys.d.G(g015, parcel);
                return new o();
            case 14:
                int g016 = ys.d.g0(parcel);
                while (parcel.dataPosition() < g016) {
                    ys.d.e0(parcel.readInt(), parcel);
                }
                ys.d.G(g016, parcel);
                return new p();
            case 15:
                int g017 = ys.d.g0(parcel);
                while (parcel.dataPosition() < g017) {
                    ys.d.e0(parcel.readInt(), parcel);
                }
                ys.d.G(g017, parcel);
                return new q();
            case 16:
                int g018 = ys.d.g0(parcel);
                String str10 = null;
                String str11 = null;
                Bundle bundle10 = null;
                while (parcel.dataPosition() < g018) {
                    int readInt13 = parcel.readInt();
                    char c11 = (char) readInt13;
                    if (c11 == 1) {
                        str10 = ys.d.B(readInt13, parcel);
                    } else if (c11 == 2) {
                        str11 = ys.d.B(readInt13, parcel);
                    } else if (c11 != 3) {
                        ys.d.e0(readInt13, parcel);
                    } else {
                        bundle10 = ys.d.y(readInt13, parcel);
                    }
                }
                ys.d.G(g018, parcel);
                return new r(str10, str11, bundle10);
            case 17:
                int g019 = ys.d.g0(parcel);
                while (parcel.dataPosition() < g019) {
                    ys.d.e0(parcel.readInt(), parcel);
                }
                ys.d.G(g019, parcel);
                return new s();
            case 18:
                int g020 = ys.d.g0(parcel);
                Bundle bundle11 = null;
                int i5 = 0;
                int i6 = 0;
                while (parcel.dataPosition() < g020) {
                    int readInt14 = parcel.readInt();
                    char c12 = (char) readInt14;
                    if (c12 == 1) {
                        i5 = ys.d.V(readInt14, parcel);
                    } else if (c12 == 2) {
                        i6 = ys.d.V(readInt14, parcel);
                    } else if (c12 != 3) {
                        ys.d.e0(readInt14, parcel);
                    } else {
                        bundle11 = ys.d.y(readInt14, parcel);
                    }
                }
                ys.d.G(g020, parcel);
                return new ve.a(i5, i6, bundle11);
            case 19:
                int g021 = ys.d.g0(parcel);
                String str12 = null;
                GoogleSignInOptions googleSignInOptions = null;
                while (parcel.dataPosition() < g021) {
                    int readInt15 = parcel.readInt();
                    char c13 = (char) readInt15;
                    if (c13 == 2) {
                        str12 = ys.d.B(readInt15, parcel);
                    } else if (c13 != 5) {
                        ys.d.e0(readInt15, parcel);
                    } else {
                        googleSignInOptions = (GoogleSignInOptions) ys.d.A(parcel, readInt15, GoogleSignInOptions.CREATOR);
                    }
                }
                ys.d.G(g021, parcel);
                return new SignInConfiguration(str12, googleSignInOptions);
            case 20:
                wg.a aVar = new wg.a(parcel);
                aVar.f19825d = ((Integer) parcel.readValue(wg.a.class.getClassLoader())).intValue();
                return aVar;
            case 21:
                return new wn.a(parcel);
            case 22:
                int g022 = ys.d.g0(parcel);
                PendingIntent pendingIntent4 = null;
                String str13 = null;
                Integer num = null;
                int i10 = 0;
                int i11 = 0;
                while (parcel.dataPosition() < g022) {
                    int readInt16 = parcel.readInt();
                    char c14 = (char) readInt16;
                    if (c14 == 1) {
                        i10 = ys.d.V(readInt16, parcel);
                    } else if (c14 == 2) {
                        i11 = ys.d.V(readInt16, parcel);
                    } else if (c14 == 3) {
                        pendingIntent4 = (PendingIntent) ys.d.A(parcel, readInt16, PendingIntent.CREATOR);
                    } else if (c14 == 4) {
                        str13 = ys.d.B(readInt16, parcel);
                    } else if (c14 != 5) {
                        ys.d.e0(readInt16, parcel);
                    } else {
                        num = ys.d.W(readInt16, parcel);
                    }
                }
                ys.d.G(g022, parcel);
                return new ye.b(i10, i11, pendingIntent4, str13, num);
            case 23:
                int g023 = ys.d.g0(parcel);
                boolean z7 = false;
                int i12 = 0;
                long j = -1;
                String str14 = null;
                while (parcel.dataPosition() < g023) {
                    int readInt17 = parcel.readInt();
                    char c15 = (char) readInt17;
                    if (c15 == 1) {
                        str14 = ys.d.B(readInt17, parcel);
                    } else if (c15 == 2) {
                        i12 = ys.d.V(readInt17, parcel);
                    } else if (c15 == 3) {
                        j = ys.d.X(readInt17, parcel);
                    } else if (c15 != 4) {
                        ys.d.e0(readInt17, parcel);
                    } else {
                        z7 = ys.d.T(readInt17, parcel);
                    }
                }
                ys.d.G(g023, parcel);
                return new ye.d(j, str14, z7, i12);
            default:
                return new zh.c((PendingIntent) parcel.readParcelable(zh.b.class.getClassLoader()), parcel.readInt() != 0);
        }
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i5) {
        switch (this.a) {
            case 0:
                return new b[i5];
            case 1:
                return new d[i5];
            case 2:
                return new e[i5];
            case 3:
                return new f[i5];
            case 4:
                return new g[i5];
            case 5:
                return new h[i5];
            case 6:
                return new i[i5];
            case 7:
                return new j[i5];
            case 8:
                return new k[i5];
            case 9:
                return new GetCredentialRequest[i5];
            case 10:
                return new l[i5];
            case 11:
                return new m[i5];
            case 12:
                return new n[i5];
            case 13:
                return new o[i5];
            case 14:
                return new p[i5];
            case 15:
                return new q[i5];
            case 16:
                return new r[i5];
            case 17:
                return new s[i5];
            case 18:
                return new ve.a[i5];
            case 19:
                return new SignInConfiguration[i5];
            case 20:
                return new wg.a[i5];
            case 21:
                return new wn.a[i5];
            case 22:
                return new ye.b[i5];
            case 23:
                return new ye.d[i5];
            default:
                return new zh.b[i5];
        }
    }
}
