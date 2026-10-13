package af;

import android.accounts.Account;
import android.content.Context;
import android.os.Handler;
import android.os.Parcel;
import android.os.RemoteException;
import android.util.Log;
import bg.m1;
import com.google.android.gms.auth.api.signin.GoogleSignInAccount;
import com.google.android.gms.internal.play_billing.v0;
import java.util.Set;

/* loaded from: classes3.dex */
public final class a0 extends hg.c implements ze.j, ze.k {

    /* renamed from: n, reason: collision with root package name */
    public static final m1 f535n = gg.b.a;

    /* renamed from: g, reason: collision with root package name */
    public final Context f536g;

    /* renamed from: h, reason: collision with root package name */
    public final Handler f537h;

    /* renamed from: i, reason: collision with root package name */
    public final m1 f538i;
    public final Set j;
    public final androidx.appcompat.widget.w k;

    /* renamed from: l, reason: collision with root package name */
    public hg.a f539l;

    /* renamed from: m, reason: collision with root package name */
    public s f540m;

    public a0(Context context, fg.a aVar, androidx.appcompat.widget.w wVar) {
        super("com.google.android.gms.signin.internal.ISignInCallbacks", 8);
        this.f536g = context;
        this.f537h = aVar;
        this.k = wVar;
        this.j = (Set) wVar.f1141d;
        this.f538i = f535n;
    }

    @Override // ze.k
    public final void b(ye.b bVar) {
        this.f540m.A(bVar);
    }

    @Override // ze.j
    public final void k(int i5) {
        s sVar = this.f540m;
        q qVar = (q) ((e) sVar.f598f).G.get((a) sVar.f595c);
        if (qVar != null) {
            if (qVar.f588n) {
                qVar.o(new ye.b(17, null, null));
            } else {
                qVar.k(i5);
            }
        }
    }

    @Override // ze.j
    public final void onConnected() {
        hg.a aVar = this.f539l;
        aVar.getClass();
        int i5 = 4;
        boolean z5 = false;
        try {
            aVar.W.getClass();
            Account account = new Account("<<default account>>", "com.google");
            GoogleSignInAccount b10 = "<<default account>>".equals(account.name) ? ve.b.a(aVar.f2866i).b() : null;
            Integer num = aVar.Y;
            bf.t.g(num);
            bf.p pVar = new bf.p(2, account, num.intValue(), b10);
            hg.d dVar = (hg.d) aVar.o();
            Parcel obtain = Parcel.obtain();
            obtain.writeInterfaceToken(dVar.f5731h);
            int i6 = xf.a.a;
            obtain.writeInt(1);
            int I = ys.l.I(20293, obtain);
            ys.l.H(obtain, 1, 4);
            obtain.writeInt(1);
            ys.l.C(obtain, 2, pVar, 0);
            ys.l.J(I, obtain);
            obtain.writeStrongBinder(this);
            Parcel obtain2 = Parcel.obtain();
            try {
                dVar.f5730g.transact(12, obtain, obtain2, 0);
                obtain2.readException();
                obtain.recycle();
                obtain2.recycle();
            } catch (Throwable th2) {
                obtain.recycle();
                obtain2.recycle();
                throw th2;
            }
        } catch (RemoteException e9) {
            Log.w("SignInClientImpl", "Remote service probably died when signIn is called");
            try {
                this.f537h.post(new v0(this, new hg.f(1, new ye.b(8, null, null), null), i5, z5));
            } catch (RemoteException unused) {
                Log.wtf("SignInClientImpl", "ISignInCallbacks#onSignInComplete should be executed from the same process, unexpected RemoteException.", e9);
            }
        }
    }
}
