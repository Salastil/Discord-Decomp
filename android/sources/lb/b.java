package lb;

import a5.a0;
import android.content.Context;
import android.util.Log;
import com.facebook.soloader.b0;
import com.facebook.soloader.w;
import e4.e;
import java.io.File;
import lh.f;
import p9.d;
import qa.s;

/* loaded from: classes3.dex */
public final class b implements c {

    /* renamed from: d, reason: collision with root package name */
    public final Context f13842d;

    /* renamed from: e, reason: collision with root package name */
    public final a0 f13843e;

    /* renamed from: i, reason: collision with root package name */
    public final int f13844i;

    public b(Context context, int i5) {
        this.f13842d = context;
        this.f13844i = i5;
        a0 a0Var = new a0((char) 0, 10);
        this.f13843e = a0Var;
        a0Var.B(context.getApplicationInfo().sourceDir);
    }

    public a0 a() {
        Context context = this.f13842d;
        a0 a0Var = this.f13843e;
        b bVar = new b(context, a0Var);
        e eVar = new e(15, context, a0Var);
        int i5 = 12;
        r8.c cVar = new r8.c(i5);
        a aVar = new a(context);
        d dVar = new d(5);
        dVar.f16329e = this.f13844i;
        return new a0(new c[]{bVar, eVar, cVar, aVar, dVar, new f(i5), new s(), new r8.c(i5)});
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // lb.c
    public boolean e(UnsatisfiedLinkError unsatisfiedLinkError, b0[] b0VarArr) {
        int i5;
        a0 a0Var = this.f13843e;
        Context context = this.f13842d;
        String str = context.getApplicationInfo().sourceDir;
        if (new File(str).exists() && a0Var.B(str)) {
            for (int i6 = 0; i6 < b0VarArr.length; i6++) {
                Object[] objArr = b0VarArr[i6];
                if (objArr instanceof w) {
                    b0VarArr[i6] = ((w) objArr).a(context);
                }
            }
            return true;
        }
        int i10 = this.f13844i;
        synchronized (a0Var) {
            i5 = a0Var.f124e;
        }
        if (i10 == i5) {
            return false;
        }
        Log.w("soloader.recovery.DetectDataAppMove", "Context was updated (perhaps by another thread)");
        return true;
    }

    public b(Context context, a0 a0Var) {
        int i5;
        this.f13842d = context;
        this.f13843e = a0Var;
        synchronized (a0Var) {
            i5 = a0Var.f124e;
        }
        this.f13844i = i5;
    }
}
