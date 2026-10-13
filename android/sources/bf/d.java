package bf;

import android.accounts.Account;
import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.RemoteException;
import android.util.Log;
import androidx.annotation.NonNull;
import com.google.android.gms.common.api.Scope;

/* loaded from: classes3.dex */
public final class d extends cf.a {

    @NonNull
    public static final Parcelable.Creator<d> CREATOR = new android.support.v4.media.a(19);
    public static final Scope[] L = new Scope[0];
    public static final ye.d[] M = new ye.d[0];
    public Account E;
    public ye.d[] F;
    public ye.d[] G;
    public final boolean H;
    public final int I;
    public boolean J;
    public final String K;

    /* renamed from: d, reason: collision with root package name */
    public final int f2850d;

    /* renamed from: e, reason: collision with root package name */
    public final int f2851e;

    /* renamed from: i, reason: collision with root package name */
    public final int f2852i;

    /* renamed from: v, reason: collision with root package name */
    public String f2853v;

    /* renamed from: w, reason: collision with root package name */
    public IBinder f2854w;

    /* renamed from: x, reason: collision with root package name */
    public Scope[] f2855x;

    /* renamed from: y, reason: collision with root package name */
    public Bundle f2856y;

    public d(int i5, int i6, int i10, String str, IBinder iBinder, Scope[] scopeArr, Bundle bundle, Account account, ye.d[] dVarArr, ye.d[] dVarArr2, boolean z5, int i11, boolean z6, String str2) {
        Scope[] scopeArr2 = scopeArr == null ? L : scopeArr;
        Bundle bundle2 = bundle == null ? new Bundle() : bundle;
        ye.d[] dVarArr3 = M;
        ye.d[] dVarArr4 = dVarArr == null ? dVarArr3 : dVarArr;
        dVarArr3 = dVarArr2 != null ? dVarArr2 : dVarArr3;
        this.f2850d = i5;
        this.f2851e = i6;
        this.f2852i = i10;
        if ("com.google.android.gms".equals(str)) {
            this.f2853v = "com.google.android.gms";
        } else {
            this.f2853v = str;
        }
        if (i5 < 2) {
            Account account2 = null;
            if (iBinder != null) {
                int i12 = a.f2836g;
                IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.common.internal.IAccountAccessor");
                f g0Var = queryLocalInterface instanceof f ? (f) queryLocalInterface : new g0(iBinder, "com.google.android.gms.common.internal.IAccountAccessor", 5);
                long clearCallingIdentity = Binder.clearCallingIdentity();
                try {
                    try {
                        g0 g0Var2 = (g0) g0Var;
                        Parcel t5 = g0Var2.t(2, g0Var2.u());
                        Account account3 = (Account) zf.g.a(t5, Account.CREATOR);
                        t5.recycle();
                        Binder.restoreCallingIdentity(clearCallingIdentity);
                        account2 = account3;
                    } catch (RemoteException unused) {
                        Log.w("AccountAccessor", "Remote account accessor probably died");
                        Binder.restoreCallingIdentity(clearCallingIdentity);
                    }
                } catch (Throwable th2) {
                    Binder.restoreCallingIdentity(clearCallingIdentity);
                    throw th2;
                }
            }
            this.E = account2;
        } else {
            this.f2854w = iBinder;
            this.E = account;
        }
        this.f2855x = scopeArr2;
        this.f2856y = bundle2;
        this.F = dVarArr4;
        this.G = dVarArr3;
        this.H = z5;
        this.I = i11;
        this.J = z6;
        this.K = str2;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        android.support.v4.media.a.a(this, parcel, i5);
    }
}
