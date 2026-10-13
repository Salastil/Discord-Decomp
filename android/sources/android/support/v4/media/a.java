package android.support.v4.media;

import android.accounts.Account;
import android.content.Intent;
import android.content.IntentSender;
import android.graphics.Bitmap;
import android.media.MediaDescription;
import android.net.Uri;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.Parcelable;
import androidx.appcompat.widget.m;
import androidx.appcompat.widget.q0;
import androidx.fragment.app.e1;
import androidx.fragment.app.i1;
import androidx.fragment.app.y0;
import androidx.swiperefreshlayout.widget.h;
import bf.b0;
import bf.d;
import bf.g;
import bf.i;
import bf.j;
import bf.p;
import bf.q;
import com.google.android.gms.auth.api.signin.GoogleSignInAccount;
import com.google.android.gms.common.api.Scope;
import com.google.firebase.messaging.RemoteMessage;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;
import ys.l;

/* loaded from: classes.dex */
public final class a implements Parcelable.Creator {
    public final /* synthetic */ int a;

    public /* synthetic */ a(int i5) {
        this.a = i5;
    }

    public static void a(d dVar, Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        int i6 = dVar.f2850d;
        l.H(parcel, 1, 4);
        parcel.writeInt(i6);
        int i10 = dVar.f2851e;
        l.H(parcel, 2, 4);
        parcel.writeInt(i10);
        int i11 = dVar.f2852i;
        l.H(parcel, 3, 4);
        parcel.writeInt(i11);
        l.D(dVar.f2853v, parcel, 4);
        IBinder iBinder = dVar.f2854w;
        if (iBinder != null) {
            int I2 = l.I(5, parcel);
            parcel.writeStrongBinder(iBinder);
            l.J(I2, parcel);
        }
        l.F(parcel, 6, dVar.f2855x, i5);
        l.z(parcel, 7, dVar.f2856y);
        l.C(parcel, 8, dVar.E, i5);
        l.F(parcel, 10, dVar.F, i5);
        l.F(parcel, 11, dVar.G, i5);
        boolean z5 = dVar.H;
        l.H(parcel, 12, 4);
        parcel.writeInt(z5 ? 1 : 0);
        int i12 = dVar.I;
        l.H(parcel, 13, 4);
        parcel.writeInt(i12);
        boolean z6 = dVar.J;
        l.H(parcel, 14, 4);
        parcel.writeInt(z6 ? 1 : 0);
        l.D(dVar.K, parcel, 15);
        l.J(I, parcel);
    }

    /* JADX WARN: Removed duplicated region for block: B:386:0x0513  */
    @Override // android.os.Parcelable.Creator
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object createFromParcel(final Parcel parcel) {
        Bundle bundle;
        int i5 = 0;
        ArrayList arrayList = null;
        d.b bVar = null;
        Bundle bundle2 = null;
        Bundle bundle3 = null;
        Account account = null;
        switch (this.a) {
            case 0:
                return new Parcelable(parcel) { // from class: android.support.v4.media.MediaBrowserCompat$MediaItem
                    public static final Parcelable.Creator<MediaBrowserCompat$MediaItem> CREATOR = new a(0);

                    /* renamed from: d, reason: collision with root package name */
                    public final int f697d;

                    /* renamed from: e, reason: collision with root package name */
                    public final MediaDescriptionCompat f698e;

                    {
                        this.f697d = parcel.readInt();
                        this.f698e = MediaDescriptionCompat.CREATOR.createFromParcel(parcel);
                    }

                    @Override // android.os.Parcelable
                    public final int describeContents() {
                        return 0;
                    }

                    public final String toString() {
                        return "MediaItem{mFlags=" + this.f697d + ", mDescription=" + this.f698e + '}';
                    }

                    @Override // android.os.Parcelable
                    public final void writeToParcel(Parcel parcel2, int i6) {
                        parcel2.writeInt(this.f697d);
                        this.f698e.writeToParcel(parcel2, i6);
                    }
                };
            case 1:
                Object createFromParcel = MediaDescription.CREATOR.createFromParcel(parcel);
                if (createFromParcel == null) {
                    return null;
                }
                MediaDescription mediaDescription = (MediaDescription) createFromParcel;
                String g6 = b.g(mediaDescription);
                CharSequence i6 = b.i(mediaDescription);
                CharSequence h6 = b.h(mediaDescription);
                CharSequence c6 = b.c(mediaDescription);
                Bitmap e9 = b.e(mediaDescription);
                Uri f2 = b.f(mediaDescription);
                Bundle d6 = b.d(mediaDescription);
                if (d6 != null) {
                    d6 = android.support.v4.media.session.b.E(d6);
                }
                Uri uri = d6 != null ? (Uri) d6.getParcelable("android.support.v4.media.description.MEDIA_URI") : null;
                if (uri != null) {
                    if (d6.containsKey("android.support.v4.media.description.NULL_BUNDLE_FLAG") && d6.size() == 2) {
                        bundle = null;
                        if (uri == null) {
                            uri = c.a(mediaDescription);
                        }
                        MediaDescriptionCompat mediaDescriptionCompat = new MediaDescriptionCompat(g6, i6, h6, c6, e9, f2, bundle, uri);
                        mediaDescriptionCompat.F = mediaDescription;
                        return mediaDescriptionCompat;
                    }
                    d6.remove("android.support.v4.media.description.MEDIA_URI");
                    d6.remove("android.support.v4.media.description.NULL_BUNDLE_FLAG");
                }
                bundle = d6;
                if (uri == null) {
                }
                MediaDescriptionCompat mediaDescriptionCompat2 = new MediaDescriptionCompat(g6, i6, h6, c6, e9, f2, bundle, uri);
                mediaDescriptionCompat2.F = mediaDescription;
                return mediaDescriptionCompat2;
            case 2:
                return new MediaMetadataCompat(parcel);
            case 3:
                return new RatingCompat(parcel.readInt(), parcel.readFloat());
            case 4:
                m mVar = new m();
                mVar.f1033d = parcel.readInt();
                return mVar;
            case 5:
                q0 q0Var = new q0(parcel);
                q0Var.f1080d = parcel.readByte() != 0;
                return q0Var;
            case 6:
                return new androidx.fragment.app.b(parcel);
            case 7:
                return new androidx.fragment.app.c(parcel);
            case 8:
                y0 y0Var = new y0();
                y0Var.f2122d = parcel.readString();
                y0Var.f2123e = parcel.readInt();
                return y0Var;
            case 9:
                e1 e1Var = new e1();
                e1Var.f1997w = null;
                e1Var.f1998x = new ArrayList();
                e1Var.f1999y = new ArrayList();
                e1Var.f1993d = parcel.createStringArrayList();
                e1Var.f1994e = parcel.createStringArrayList();
                e1Var.f1995i = (androidx.fragment.app.b[]) parcel.createTypedArray(androidx.fragment.app.b.CREATOR);
                e1Var.f1996v = parcel.readInt();
                e1Var.f1997w = parcel.readString();
                e1Var.f1998x = parcel.createStringArrayList();
                e1Var.f1999y = parcel.createTypedArrayList(androidx.fragment.app.c.CREATOR);
                e1Var.E = parcel.createTypedArrayList(y0.CREATOR);
                return e1Var;
            case 10:
                return new i1(parcel);
            case 11:
                return new h(parcel);
            case 12:
                int g02 = ys.d.g0(parcel);
                while (parcel.dataPosition() < g02) {
                    int readInt = parcel.readInt();
                    char c8 = (char) readInt;
                    if (c8 == 1) {
                        i5 = ys.d.V(readInt, parcel);
                    } else if (c8 != 2) {
                        ys.d.e0(readInt, parcel);
                    } else {
                        arrayList = ys.d.E(parcel, readInt, g.CREATOR);
                    }
                }
                ys.d.G(g02, parcel);
                return new j(i5, arrayList);
            case 13:
                int g03 = ys.d.g0(parcel);
                int i10 = -1;
                long j = 0;
                long j5 = 0;
                int i11 = 0;
                int i12 = 0;
                int i13 = 0;
                int i14 = 0;
                String str = null;
                String str2 = null;
                while (parcel.dataPosition() < g03) {
                    int readInt2 = parcel.readInt();
                    switch ((char) readInt2) {
                        case 1:
                            i11 = ys.d.V(readInt2, parcel);
                            break;
                        case 2:
                            i12 = ys.d.V(readInt2, parcel);
                            break;
                        case 3:
                            i13 = ys.d.V(readInt2, parcel);
                            break;
                        case 4:
                            j = ys.d.X(readInt2, parcel);
                            break;
                        case 5:
                            j5 = ys.d.X(readInt2, parcel);
                            break;
                        case 6:
                            str = ys.d.B(readInt2, parcel);
                            break;
                        case 7:
                            str2 = ys.d.B(readInt2, parcel);
                            break;
                        case '\b':
                            i14 = ys.d.V(readInt2, parcel);
                            break;
                        case '\t':
                            i10 = ys.d.V(readInt2, parcel);
                            break;
                        default:
                            ys.d.e0(readInt2, parcel);
                            break;
                    }
                }
                ys.d.G(g03, parcel);
                return new g(i11, i12, i13, j, j5, str, str2, i14, i10);
            case 14:
                int g04 = ys.d.g0(parcel);
                int i15 = 0;
                GoogleSignInAccount googleSignInAccount = null;
                while (parcel.dataPosition() < g04) {
                    int readInt3 = parcel.readInt();
                    char c10 = (char) readInt3;
                    if (c10 == 1) {
                        i5 = ys.d.V(readInt3, parcel);
                    } else if (c10 == 2) {
                        account = (Account) ys.d.A(parcel, readInt3, Account.CREATOR);
                    } else if (c10 == 3) {
                        i15 = ys.d.V(readInt3, parcel);
                    } else if (c10 != 4) {
                        ys.d.e0(readInt3, parcel);
                    } else {
                        googleSignInAccount = (GoogleSignInAccount) ys.d.A(parcel, readInt3, GoogleSignInAccount.CREATOR);
                    }
                }
                ys.d.G(g04, parcel);
                return new p(i5, account, i15, googleSignInAccount);
            case 15:
                int g05 = ys.d.g0(parcel);
                int i16 = 0;
                boolean z5 = false;
                boolean z6 = false;
                IBinder iBinder = null;
                ye.b bVar2 = null;
                while (parcel.dataPosition() < g05) {
                    int readInt4 = parcel.readInt();
                    char c11 = (char) readInt4;
                    if (c11 == 1) {
                        i16 = ys.d.V(readInt4, parcel);
                    } else if (c11 == 2) {
                        int Y = ys.d.Y(readInt4, parcel);
                        int dataPosition = parcel.dataPosition();
                        if (Y == 0) {
                            iBinder = null;
                        } else {
                            IBinder readStrongBinder = parcel.readStrongBinder();
                            parcel.setDataPosition(dataPosition + Y);
                            iBinder = readStrongBinder;
                        }
                    } else if (c11 == 3) {
                        bVar2 = (ye.b) ys.d.A(parcel, readInt4, ye.b.CREATOR);
                    } else if (c11 == 4) {
                        z5 = ys.d.T(readInt4, parcel);
                    } else if (c11 != 5) {
                        ys.d.e0(readInt4, parcel);
                    } else {
                        z6 = ys.d.T(readInt4, parcel);
                    }
                }
                ys.d.G(g05, parcel);
                return new q(i16, iBinder, bVar2, z5, z6);
            case 16:
                int g06 = ys.d.g0(parcel);
                int i17 = 0;
                int i18 = 0;
                int i19 = 0;
                boolean z7 = false;
                boolean z8 = false;
                while (parcel.dataPosition() < g06) {
                    int readInt5 = parcel.readInt();
                    char c12 = (char) readInt5;
                    if (c12 == 1) {
                        i17 = ys.d.V(readInt5, parcel);
                    } else if (c12 == 2) {
                        z7 = ys.d.T(readInt5, parcel);
                    } else if (c12 == 3) {
                        z8 = ys.d.T(readInt5, parcel);
                    } else if (c12 == 4) {
                        i18 = ys.d.V(readInt5, parcel);
                    } else if (c12 != 5) {
                        ys.d.e0(readInt5, parcel);
                    } else {
                        i19 = ys.d.V(readInt5, parcel);
                    }
                }
                ys.d.G(g06, parcel);
                return new i(i17, i18, i19, z7, z8);
            case 17:
                int g07 = ys.d.g0(parcel);
                ye.d[] dVarArr = null;
                bf.c cVar = null;
                while (parcel.dataPosition() < g07) {
                    int readInt6 = parcel.readInt();
                    char c13 = (char) readInt6;
                    if (c13 == 1) {
                        bundle3 = ys.d.y(readInt6, parcel);
                    } else if (c13 == 2) {
                        dVarArr = (ye.d[]) ys.d.D(parcel, readInt6, ye.d.CREATOR);
                    } else if (c13 == 3) {
                        i5 = ys.d.V(readInt6, parcel);
                    } else if (c13 != 4) {
                        ys.d.e0(readInt6, parcel);
                    } else {
                        cVar = (bf.c) ys.d.A(parcel, readInt6, bf.c.CREATOR);
                    }
                }
                ys.d.G(g07, parcel);
                b0 b0Var = new b0();
                b0Var.f2838d = bundle3;
                b0Var.f2839e = dVarArr;
                b0Var.f2840i = i5;
                b0Var.f2841v = cVar;
                return b0Var;
            case 18:
                int g08 = ys.d.g0(parcel);
                boolean z10 = false;
                boolean z11 = false;
                int i20 = 0;
                i iVar = null;
                int[] iArr = null;
                int[] iArr2 = null;
                while (parcel.dataPosition() < g08) {
                    int readInt7 = parcel.readInt();
                    switch ((char) readInt7) {
                        case 1:
                            iVar = (i) ys.d.A(parcel, readInt7, i.CREATOR);
                            break;
                        case 2:
                            z10 = ys.d.T(readInt7, parcel);
                            break;
                        case 3:
                            z11 = ys.d.T(readInt7, parcel);
                            break;
                        case 4:
                            int Y2 = ys.d.Y(readInt7, parcel);
                            int dataPosition2 = parcel.dataPosition();
                            if (Y2 != 0) {
                                int[] createIntArray = parcel.createIntArray();
                                parcel.setDataPosition(dataPosition2 + Y2);
                                iArr = createIntArray;
                                break;
                            } else {
                                iArr = null;
                                break;
                            }
                        case 5:
                            i20 = ys.d.V(readInt7, parcel);
                            break;
                        case 6:
                            int Y3 = ys.d.Y(readInt7, parcel);
                            int dataPosition3 = parcel.dataPosition();
                            if (Y3 != 0) {
                                int[] createIntArray2 = parcel.createIntArray();
                                parcel.setDataPosition(dataPosition3 + Y3);
                                iArr2 = createIntArray2;
                                break;
                            } else {
                                iArr2 = null;
                                break;
                            }
                        default:
                            ys.d.e0(readInt7, parcel);
                            break;
                    }
                }
                ys.d.G(g08, parcel);
                return new bf.c(iVar, z10, z11, iArr, i20, iArr2);
            case 19:
                int g09 = ys.d.g0(parcel);
                Bundle bundle4 = new Bundle();
                Scope[] scopeArr = d.L;
                ye.d[] dVarArr2 = d.M;
                ye.d[] dVarArr3 = dVarArr2;
                int i21 = 0;
                int i22 = 0;
                int i23 = 0;
                boolean z12 = false;
                int i24 = 0;
                boolean z13 = false;
                String str3 = null;
                IBinder iBinder2 = null;
                Account account2 = null;
                String str4 = null;
                while (parcel.dataPosition() < g09) {
                    int readInt8 = parcel.readInt();
                    switch ((char) readInt8) {
                        case 1:
                            i21 = ys.d.V(readInt8, parcel);
                            break;
                        case 2:
                            i22 = ys.d.V(readInt8, parcel);
                            break;
                        case 3:
                            i23 = ys.d.V(readInt8, parcel);
                            break;
                        case 4:
                            str3 = ys.d.B(readInt8, parcel);
                            break;
                        case 5:
                            int Y4 = ys.d.Y(readInt8, parcel);
                            int dataPosition4 = parcel.dataPosition();
                            if (Y4 != 0) {
                                IBinder readStrongBinder2 = parcel.readStrongBinder();
                                parcel.setDataPosition(dataPosition4 + Y4);
                                iBinder2 = readStrongBinder2;
                                break;
                            } else {
                                iBinder2 = null;
                                break;
                            }
                        case 6:
                            scopeArr = (Scope[]) ys.d.D(parcel, readInt8, Scope.CREATOR);
                            break;
                        case 7:
                            bundle4 = ys.d.y(readInt8, parcel);
                            break;
                        case '\b':
                            account2 = (Account) ys.d.A(parcel, readInt8, Account.CREATOR);
                            break;
                        case '\t':
                        default:
                            ys.d.e0(readInt8, parcel);
                            break;
                        case '\n':
                            dVarArr2 = (ye.d[]) ys.d.D(parcel, readInt8, ye.d.CREATOR);
                            break;
                        case 11:
                            dVarArr3 = (ye.d[]) ys.d.D(parcel, readInt8, ye.d.CREATOR);
                            break;
                        case '\f':
                            z12 = ys.d.T(readInt8, parcel);
                            break;
                        case '\r':
                            i24 = ys.d.V(readInt8, parcel);
                            break;
                        case 14:
                            z13 = ys.d.T(readInt8, parcel);
                            break;
                        case 15:
                            str4 = ys.d.B(readInt8, parcel);
                            break;
                    }
                }
                ys.d.G(g09, parcel);
                return new d(i21, i22, i23, str3, iBinder2, scopeArr, bundle4, account2, dVarArr2, dVarArr3, z12, i24, z13, str4);
            case 20:
                return new com.google.android.material.datepicker.b((com.google.android.material.datepicker.p) parcel.readParcelable(com.google.android.material.datepicker.p.class.getClassLoader()), (com.google.android.material.datepicker.p) parcel.readParcelable(com.google.android.material.datepicker.p.class.getClassLoader()), (com.google.android.material.datepicker.d) parcel.readParcelable(com.google.android.material.datepicker.d.class.getClassLoader()), (com.google.android.material.datepicker.p) parcel.readParcelable(com.google.android.material.datepicker.p.class.getClassLoader()), parcel.readInt());
            case 21:
                return new com.google.android.material.datepicker.d(parcel.readLong());
            case 22:
                return com.google.android.material.datepicker.p.a(parcel.readInt(), parcel.readInt());
            case 23:
                int g010 = ys.d.g0(parcel);
                while (parcel.dataPosition() < g010) {
                    int readInt9 = parcel.readInt();
                    if (((char) readInt9) != 2) {
                        ys.d.e0(readInt9, parcel);
                    } else {
                        bundle2 = ys.d.y(readInt9, parcel);
                    }
                }
                ys.d.G(g010, parcel);
                return new RemoteMessage(bundle2);
            case 24:
                d.d dVar = new d.d();
                IBinder readStrongBinder3 = parcel.readStrongBinder();
                int i25 = d.c.f7342g;
                if (readStrongBinder3 != null) {
                    IInterface queryLocalInterface = readStrongBinder3.queryLocalInterface(d.b.f7341e);
                    if (queryLocalInterface == null || !(queryLocalInterface instanceof d.b)) {
                        d.a aVar = new d.a();
                        aVar.f7340f = readStrongBinder3;
                        bVar = aVar;
                    } else {
                        bVar = (d.b) queryLocalInterface;
                    }
                }
                dVar.f7344d = bVar;
                return dVar;
            case 25:
                String readString = parcel.readString();
                readString.getClass();
                return new ed.a(parcel.readInt(), readString);
            case 26:
                Intrinsics.checkNotNullParameter(parcel, "parcel");
                Intrinsics.checkNotNullParameter(parcel, "parcel");
                return new f.a(parcel.readInt(), parcel.readInt() != 0 ? (Intent) Intent.CREATOR.createFromParcel(parcel) : null);
            case 27:
                Intrinsics.checkNotNullParameter(parcel, "inParcel");
                Intrinsics.checkNotNullParameter(parcel, "parcel");
                Parcelable readParcelable = parcel.readParcelable(IntentSender.class.getClassLoader());
                Intrinsics.checkNotNull(readParcelable);
                return new f.h((IntentSender) readParcelable, (Intent) parcel.readParcelable(Intent.class.getClassLoader()), parcel.readInt(), parcel.readInt());
            case 28:
                return new fd.a(parcel);
            default:
                fh.j jVar = new fh.j();
                jVar.f8613d = parcel.readInt();
                jVar.f8614e = (ch.g) parcel.readParcelable(fh.j.class.getClassLoader());
                return jVar;
        }
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i5) {
        switch (this.a) {
            case 0:
                return new MediaBrowserCompat$MediaItem[i5];
            case 1:
                return new MediaDescriptionCompat[i5];
            case 2:
                return new MediaMetadataCompat[i5];
            case 3:
                return new RatingCompat[i5];
            case 4:
                return new m[i5];
            case 5:
                return new q0[i5];
            case 6:
                return new androidx.fragment.app.b[i5];
            case 7:
                return new androidx.fragment.app.c[i5];
            case 8:
                return new y0[i5];
            case 9:
                return new e1[i5];
            case 10:
                return new i1[i5];
            case 11:
                return new h[i5];
            case 12:
                return new j[i5];
            case 13:
                return new g[i5];
            case 14:
                return new p[i5];
            case 15:
                return new q[i5];
            case 16:
                return new i[i5];
            case 17:
                return new b0[i5];
            case 18:
                return new bf.c[i5];
            case 19:
                return new d[i5];
            case 20:
                return new com.google.android.material.datepicker.b[i5];
            case 21:
                return new com.google.android.material.datepicker.d[i5];
            case 22:
                return new com.google.android.material.datepicker.p[i5];
            case 23:
                return new RemoteMessage[i5];
            case 24:
                return new d.d[i5];
            case 25:
                return new ed.a[i5];
            case 26:
                return new f.a[i5];
            case 27:
                return new f.h[i5];
            case 28:
                return new fd.a[i5];
            default:
                return new fh.j[i5];
        }
    }
}
