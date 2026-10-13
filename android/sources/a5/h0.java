package a5;

import android.os.SystemClock;
import android.util.SparseBooleanArray;
import android.view.View;
import android.view.ViewGroup;
import androidx.appcompat.widget.ActionMenuView;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.c2;
import androidx.lifecycle.Observer;
import com.google.android.gms.auth.api.signin.internal.SignInHubActivity;
import com.google.android.gms.internal.play_billing.l4;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class h0 implements n.u, n8.a, ch.t, Observer {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f174d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f175e;

    /* renamed from: i, reason: collision with root package name */
    public Object f176i;

    public /* synthetic */ h0(char c6, int i5) {
        this.f174d = i5;
    }

    public void A(l4 l4Var) {
        if (this.f175e) {
            com.google.android.gms.internal.play_billing.s.h("BillingLogger", "Skipping logging since initialization failed.");
            return;
        }
        try {
            ((f9.b) this.f176i).c(new tb.a(l4Var, null));
        } catch (Throwable unused) {
            com.google.android.gms.internal.play_billing.s.h("BillingLogger", "logging failed.");
        }
    }

    @Override // n8.a
    public void a(File file) {
        k8.b bVar;
        k8.j h6;
        if (this.f175e && (h6 = k8.b.h(file, (bVar = (k8.b) this.f176i))) != null) {
            String str = (String) h6.f13231e;
            if (str != ".tmp") {
                o8.h.e(str == ".cnt");
                return;
            }
            long lastModified = file.lastModified();
            bVar.f13205e.getClass();
            if (lastModified > System.currentTimeMillis() - k8.b.f13200f) {
                return;
            }
        }
        file.delete();
    }

    @Override // n.u
    public void b(n.j jVar, boolean z5) {
        androidx.appcompat.widget.n nVar;
        i.e0 e0Var = (i.e0) this.f176i;
        if (this.f175e) {
            return;
        }
        this.f175e = true;
        ActionMenuView actionMenuView = e0Var.a.a.f883d;
        if (actionMenuView != null && (nVar = actionMenuView.Q) != null) {
            nVar.l();
            androidx.appcompat.widget.h hVar = nVar.R;
            if (hVar != null && hVar.b()) {
                hVar.f14709i.dismiss();
            }
        }
        e0Var.f10303b.onPanelClosed(108, jVar);
        this.f175e = false;
    }

    @Override // n8.a
    public void c(File file) {
        if (this.f175e || !file.equals(((k8.b) this.f176i).f13203c)) {
            return;
        }
        this.f175e = true;
    }

    @Override // n8.a
    public void d(File file) {
        k8.b bVar = (k8.b) this.f176i;
        if (!bVar.a.equals(file) && !this.f175e) {
            file.delete();
        }
        if (this.f175e && file.equals(bVar.f13203c)) {
            this.f175e = false;
        }
    }

    public void e(int i5) {
        ke.b.k(!this.f175e);
        ((SparseBooleanArray) this.f176i).append(i5, true);
    }

    public synchronized void f() {
        while (!this.f175e) {
            wait();
        }
    }

    public synchronized boolean g(long j) {
        if (j <= 0) {
            return this.f175e;
        }
        ((ke.y) this.f176i).getClass();
        long elapsedRealtime = SystemClock.elapsedRealtime();
        long j5 = j + elapsedRealtime;
        if (j5 < elapsedRealtime) {
            f();
        } else {
            while (!this.f175e && elapsedRealtime < j5) {
                wait(j5 - elapsedRealtime);
                ((ke.y) this.f176i).getClass();
                elapsedRealtime = SystemClock.elapsedRealtime();
            }
        }
        return this.f175e;
    }

    @Override // n.u
    public boolean h(n.j jVar) {
        ((i.e0) this.f176i).f10303b.onMenuOpened(108, jVar);
        return true;
    }

    /* JADX WARN: Removed duplicated region for block: B:35:0x008d  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x009b  */
    @Override // ch.t
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public WindowInsetsCompat i(View view, WindowInsetsCompat windowInsetsCompat, ch.u uVar) {
        boolean z5;
        boolean z6;
        c2 c2Var = windowInsetsCompat.a;
        Insets f2 = c2Var.f(519);
        Insets f10 = c2Var.f(32);
        BottomSheetBehavior bottomSheetBehavior = (BottomSheetBehavior) this.f176i;
        boolean z7 = bottomSheetBehavior.f5971o;
        int i5 = f2.f1512b;
        int i6 = f2.f1513c;
        int i10 = f2.a;
        bottomSheetBehavior.f5979w = i5;
        boolean z8 = true;
        boolean z10 = view.getLayoutDirection() == 1;
        int paddingBottom = view.getPaddingBottom();
        int paddingLeft = view.getPaddingLeft();
        int paddingRight = view.getPaddingRight();
        if (z7) {
            int a = windowInsetsCompat.a();
            bottomSheetBehavior.f5978v = a;
            paddingBottom = a + uVar.f3569e;
        }
        if (bottomSheetBehavior.f5972p) {
            paddingLeft = (z10 ? uVar.f3568d : uVar.f3566b) + i10;
        }
        if (bottomSheetBehavior.f5973q) {
            paddingRight = (z10 ? uVar.f3566b : uVar.f3568d) + i6;
        }
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) view.getLayoutParams();
        if (!bottomSheetBehavior.f5975s || marginLayoutParams.leftMargin == i10) {
            z5 = false;
        } else {
            marginLayoutParams.leftMargin = i10;
            z5 = true;
        }
        if (bottomSheetBehavior.f5976t && marginLayoutParams.rightMargin != i6) {
            marginLayoutParams.rightMargin = i6;
            z5 = true;
        }
        if (bottomSheetBehavior.f5977u) {
            int i11 = marginLayoutParams.topMargin;
            int i12 = f2.f1512b;
            if (i11 != i12) {
                marginLayoutParams.topMargin = i12;
                if (z8) {
                    view.setLayoutParams(marginLayoutParams);
                }
                view.setPadding(paddingLeft, view.getPaddingTop(), paddingRight, paddingBottom);
                z6 = this.f175e;
                if (z6) {
                    bottomSheetBehavior.f5969m = f10.f1514d;
                }
                if (z7 && !z6) {
                    return windowInsetsCompat;
                }
                bottomSheetBehavior.X();
                return windowInsetsCompat;
            }
        }
        z8 = z5;
        if (z8) {
        }
        view.setPadding(paddingLeft, view.getPaddingTop(), paddingRight, paddingBottom);
        z6 = this.f175e;
        if (z6) {
        }
        if (z7) {
        }
        bottomSheetBehavior.X();
        return windowInsetsCompat;
    }

    public synchronized void j() {
        boolean z5 = false;
        while (!this.f175e) {
            try {
                wait();
            } catch (InterruptedException unused) {
                z5 = true;
            }
        }
        if (z5) {
            Thread.currentThread().interrupt();
        }
    }

    public ke.g k() {
        ke.b.k(!this.f175e);
        this.f175e = true;
        return new ke.g((SparseBooleanArray) this.f176i);
    }

    public synchronized void l() {
        this.f175e = false;
    }

    public boolean m() {
        return this.f175e;
    }

    public void n(Function1 function1) {
        if (this.f175e) {
            throw new IllegalStateException("[RNScreens] Recursive emission on TabsNavigationStateObserverRegistry");
        }
        this.f175e = true;
        try {
            Iterator it = ((ArrayList) this.f176i).iterator();
            while (it.hasNext()) {
                function1.invoke((hn.i) it.next());
            }
        } finally {
            this.f175e = false;
        }
    }

    public boolean o(int i5, CharSequence charSequence) {
        if (charSequence == null || i5 < 0 || charSequence.length() - i5 < 0) {
            throw new IllegalArgumentException();
        }
        j1.c cVar = (j1.c) this.f176i;
        if (cVar == null) {
            return m();
        }
        cVar.getClass();
        char c6 = 2;
        for (int i6 = 0; i6 < i5 && c6 == 2; i6++) {
            byte directionality = Character.getDirectionality(charSequence.charAt(i6));
            h0 h0Var = j1.d.a;
            if (directionality != 0) {
                if (directionality != 1 && directionality != 2) {
                    switch (directionality) {
                        case 14:
                        case 15:
                            break;
                        case 16:
                        case 17:
                            break;
                        default:
                            c6 = 2;
                            break;
                    }
                }
                c6 = 0;
            }
            c6 = 1;
        }
        if (c6 == 0) {
            return true;
        }
        if (c6 != 1) {
            return m();
        }
        return false;
    }

    @Override // androidx.lifecycle.Observer
    public void onChanged(Object obj) {
        this.f175e = true;
        r3.g gVar = (r3.g) this.f176i;
        gVar.getClass();
        SignInHubActivity signInHubActivity = (SignInHubActivity) gVar.f17126e;
        signInHubActivity.setResult(signInHubActivity.f5640w, signInHubActivity.f5641x);
        signInHubActivity.finish();
    }

    public void p() {
        this.f175e = false;
    }

    public synchronized boolean q() {
        if (this.f175e) {
            return false;
        }
        this.f175e = true;
        notifyAll();
        return true;
    }

    public void r(byte b10) {
        ((a0) this.f176i).H(String.valueOf(b10));
    }

    public void s(char c6) {
        a0 a0Var = (a0) this.f176i;
        a0Var.n(a0Var.f124e, 1);
        char[] cArr = (char[]) a0Var.f125i;
        int i5 = a0Var.f124e;
        a0Var.f124e = i5 + 1;
        cArr[i5] = c6;
    }

    public void t(int i5) {
        ((a0) this.f176i).H(String.valueOf(i5));
    }

    public String toString() {
        switch (this.f174d) {
            case 11:
                return ((r3.g) this.f176i).toString();
            case 12:
            default:
                return super.toString();
            case 13:
                return this.f175e ? "FALL_THROUGH" : String.valueOf(this.f176i);
        }
    }

    public void u(long j) {
        ((a0) this.f176i).H(String.valueOf(j));
    }

    public void v(String v5) {
        Intrinsics.checkNotNullParameter(v5, "v");
        ((a0) this.f176i).H(v5);
    }

    public void w(short s2) {
        ((a0) this.f176i).H(String.valueOf(s2));
    }

    public void x(String text) {
        int i5;
        Intrinsics.checkNotNullParameter(text, "value");
        a0 a0Var = (a0) this.f176i;
        Intrinsics.checkNotNullParameter(text, "text");
        a0Var.n(a0Var.f124e, text.length() + 2);
        char[] cArr = (char[]) a0Var.f125i;
        int i6 = a0Var.f124e;
        int i10 = i6 + 1;
        cArr[i6] = '\"';
        int length = text.length();
        text.getChars(0, length, cArr, i10);
        int i11 = length + i10;
        int i12 = i10;
        while (i12 < i11) {
            char c6 = cArr[i12];
            byte[] bArr = ds.f0.f7721b;
            if (c6 < bArr.length && bArr[c6] != 0) {
                int length2 = text.length();
                for (int i13 = i12 - i10; i13 < length2; i13++) {
                    a0Var.n(i12, 2);
                    char charAt = text.charAt(i13);
                    byte[] bArr2 = ds.f0.f7721b;
                    if (charAt < bArr2.length) {
                        byte b10 = bArr2[charAt];
                        if (b10 == 0) {
                            i5 = i12 + 1;
                            ((char[]) a0Var.f125i)[i12] = charAt;
                        } else {
                            if (b10 == 1) {
                                String str = ds.f0.a[charAt];
                                Intrinsics.checkNotNull(str);
                                a0Var.n(i12, str.length());
                                str.getChars(0, str.length(), (char[]) a0Var.f125i, i12);
                                int length3 = str.length() + i12;
                                a0Var.f124e = length3;
                                i12 = length3;
                            } else {
                                char[] cArr2 = (char[]) a0Var.f125i;
                                cArr2[i12] = '\\';
                                cArr2[i12 + 1] = (char) b10;
                                i12 += 2;
                                a0Var.f124e = i12;
                            }
                        }
                    } else {
                        i5 = i12 + 1;
                        ((char[]) a0Var.f125i)[i12] = charAt;
                    }
                    i12 = i5;
                }
                a0Var.n(i12, 1);
                ((char[]) a0Var.f125i)[i12] = '\"';
                a0Var.f124e = i12 + 1;
                return;
            }
            i12++;
        }
        cArr[i11] = '\"';
        a0Var.f124e = i11 + 1;
    }

    public /* synthetic */ h0(int i5, Object obj) {
        this.f174d = i5;
        this.f176i = obj;
    }

    public /* synthetic */ h0(Object obj, boolean z5, int i5) {
        this.f174d = i5;
        this.f176i = obj;
        this.f175e = z5;
    }

    public h0(a0 writer) {
        this.f174d = 1;
        Intrinsics.checkNotNullParameter(writer, "writer");
        this.f176i = writer;
        this.f175e = true;
    }

    public h0(int i5, byte b10) {
        this.f174d = i5;
        switch (i5) {
            case 8:
                this.f176i = new SparseBooleanArray();
                break;
            default:
                this.f176i = new ArrayList();
                break;
        }
    }

    public h0(int i5) {
        this.f174d = 7;
        this.f176i = ke.y.a;
    }

    public h0(String[] strArr, boolean z5) {
        this.f174d = 4;
        this.f175e = z5;
        this.f176i = strArr;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public h0(j1.c cVar, boolean z5) {
        this(5, cVar);
        this.f174d = 5;
        this.f175e = z5;
    }

    public h0(List descriptors, boolean z5) {
        this.f174d = 12;
        Intrinsics.checkNotNullParameter(descriptors, "descriptors");
        this.f176i = descriptors;
        this.f175e = z5;
    }

    public h0(ve.d dVar, r3.g gVar) {
        this.f174d = 11;
        this.f175e = false;
        this.f176i = gVar;
    }

    public void y() {
    }

    public void z() {
    }
}
