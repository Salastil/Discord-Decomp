package ue;

import android.accounts.Account;
import android.net.Uri;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.auth.api.signin.GoogleSignInAccount;
import com.google.android.gms.auth.api.signin.GoogleSignInOptions;
import com.google.android.gms.auth.api.signin.SignInAccount;
import com.google.android.gms.common.api.Scope;
import java.util.ArrayList;
import ys.d;

/* loaded from: classes3.dex */
public final class c implements Parcelable.Creator {
    public final /* synthetic */ int a;

    public /* synthetic */ c(int i5) {
        this.a = i5;
    }

    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        switch (this.a) {
            case 0:
                int g02 = d.g0(parcel);
                String str = null;
                String str2 = null;
                String str3 = null;
                String str4 = null;
                Uri uri = null;
                String str5 = null;
                String str6 = null;
                ArrayList arrayList = null;
                String str7 = null;
                String str8 = null;
                long j = 0;
                int i5 = 0;
                while (parcel.dataPosition() < g02) {
                    int readInt = parcel.readInt();
                    switch ((char) readInt) {
                        case 1:
                            i5 = d.V(readInt, parcel);
                            break;
                        case 2:
                            str = d.B(readInt, parcel);
                            break;
                        case 3:
                            str2 = d.B(readInt, parcel);
                            break;
                        case 4:
                            str3 = d.B(readInt, parcel);
                            break;
                        case 5:
                            str4 = d.B(readInt, parcel);
                            break;
                        case 6:
                            uri = (Uri) d.A(parcel, readInt, Uri.CREATOR);
                            break;
                        case 7:
                            str5 = d.B(readInt, parcel);
                            break;
                        case '\b':
                            j = d.X(readInt, parcel);
                            break;
                        case '\t':
                            str6 = d.B(readInt, parcel);
                            break;
                        case '\n':
                            arrayList = d.E(parcel, readInt, Scope.CREATOR);
                            break;
                        case 11:
                            str7 = d.B(readInt, parcel);
                            break;
                        case '\f':
                            str8 = d.B(readInt, parcel);
                            break;
                        default:
                            d.e0(readInt, parcel);
                            break;
                    }
                }
                d.G(g02, parcel);
                return new GoogleSignInAccount(i5, str, str2, str3, str4, uri, str5, j, str6, arrayList, str7, str8);
            case 1:
                int g03 = d.g0(parcel);
                ArrayList arrayList2 = null;
                ArrayList arrayList3 = null;
                Account account = null;
                String str9 = null;
                String str10 = null;
                String str11 = null;
                int i6 = 0;
                boolean z5 = false;
                boolean z6 = false;
                boolean z7 = false;
                while (parcel.dataPosition() < g03) {
                    int readInt2 = parcel.readInt();
                    switch ((char) readInt2) {
                        case 1:
                            i6 = d.V(readInt2, parcel);
                            break;
                        case 2:
                            arrayList3 = d.E(parcel, readInt2, Scope.CREATOR);
                            break;
                        case 3:
                            account = (Account) d.A(parcel, readInt2, Account.CREATOR);
                            break;
                        case 4:
                            z5 = d.T(readInt2, parcel);
                            break;
                        case 5:
                            z6 = d.T(readInt2, parcel);
                            break;
                        case 6:
                            z7 = d.T(readInt2, parcel);
                            break;
                        case 7:
                            str9 = d.B(readInt2, parcel);
                            break;
                        case '\b':
                            str10 = d.B(readInt2, parcel);
                            break;
                        case '\t':
                            arrayList2 = d.E(parcel, readInt2, ve.a.CREATOR);
                            break;
                        case '\n':
                            str11 = d.B(readInt2, parcel);
                            break;
                        default:
                            d.e0(readInt2, parcel);
                            break;
                    }
                }
                d.G(g03, parcel);
                return new GoogleSignInOptions(i6, arrayList3, account, z5, z6, z7, str9, str10, GoogleSignInOptions.i(arrayList2), str11);
            default:
                int g04 = d.g0(parcel);
                String str12 = "";
                GoogleSignInAccount googleSignInAccount = null;
                String str13 = "";
                while (parcel.dataPosition() < g04) {
                    int readInt3 = parcel.readInt();
                    char c6 = (char) readInt3;
                    if (c6 == 4) {
                        str12 = d.B(readInt3, parcel);
                    } else if (c6 == 7) {
                        googleSignInAccount = (GoogleSignInAccount) d.A(parcel, readInt3, GoogleSignInAccount.CREATOR);
                    } else if (c6 != '\b') {
                        d.e0(readInt3, parcel);
                    } else {
                        str13 = d.B(readInt3, parcel);
                    }
                }
                d.G(g04, parcel);
                return new SignInAccount(str12, googleSignInAccount, str13);
        }
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ Object[] newArray(int i5) {
        switch (this.a) {
            case 0:
                return new GoogleSignInAccount[i5];
            case 1:
                return new GoogleSignInOptions[i5];
            default:
                return new SignInAccount[i5];
        }
    }
}
