package bf;

import android.accounts.Account;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.auth.api.signin.GoogleSignInAccount;

/* loaded from: classes3.dex */
public final class p extends cf.a {
    public static final Parcelable.Creator<p> CREATOR = new android.support.v4.media.a(14);

    /* renamed from: d, reason: collision with root package name */
    public final int f2904d;

    /* renamed from: e, reason: collision with root package name */
    public final Account f2905e;

    /* renamed from: i, reason: collision with root package name */
    public final int f2906i;

    /* renamed from: v, reason: collision with root package name */
    public final GoogleSignInAccount f2907v;

    public p(int i5, Account account, int i6, GoogleSignInAccount googleSignInAccount) {
        this.f2904d = i5;
        this.f2905e = account;
        this.f2906i = i6;
        this.f2907v = googleSignInAccount;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f2904d);
        ys.l.C(parcel, 2, this.f2905e, i5);
        ys.l.H(parcel, 3, 4);
        parcel.writeInt(this.f2906i);
        ys.l.C(parcel, 4, this.f2907v, i5);
        ys.l.J(I, parcel);
    }
}
