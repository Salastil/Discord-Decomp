package lb;

import android.content.Context;
import android.os.CancellationSignal;
import android.util.Log;
import androidx.credentials.CredentialManager;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.soloader.a0;
import com.facebook.soloader.b0;
import com.facebook.soloader.g0;
import com.margelo.nitro.playagerangedeclaration.d;
import ha.l;
import java.io.File;
import java.util.ArrayList;
import k2.m;
import kotlin.jvm.internal.Intrinsics;
import n1.e;
import n1.j;
import n1.p;
import n1.w;
import o1.g;
import o1.i;
import o1.n;

/* loaded from: classes3.dex */
public final class a implements c, CredentialManager {

    /* renamed from: d, reason: collision with root package name */
    public final Context f13841d;

    public a(Context context) {
        this.f13841d = context;
    }

    @Override // androidx.credentials.CredentialManager
    public void a(Context context, p request, CancellationSignal cancellationSignal, com.discord.misc.utilities.threading.a executor, l callback) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
        j b10 = m.b(new m(context, 1), request);
        if (b10 == null) {
            callback.e(new n("getCredentialAsync no provider dependencies found - please ensure the desired provider dependencies are added"));
        } else {
            b10.onGetCredential(context, request, cancellationSignal, executor, callback);
        }
    }

    @Override // androidx.credentials.CredentialManager
    public void b(Context ctx, e request, CancellationSignal cancellationSignal, com.discord.misc.utilities.threading.a executor, gj.c callback) {
        Intrinsics.checkNotNullParameter(ctx, "context");
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
        j b10 = m.b(new m(this.f13841d, 1), request);
        if (b10 == null) {
            callback.e(new g("createCredentialAsync no provider dependencies found - please ensure the desired provider dependencies are added"));
            return;
        }
        Intrinsics.checkNotNullParameter(ctx, "ctx");
        if (ctx.getPackageManager().hasSystemFeature("android.hardware.type.watch")) {
            callback.e(new i("createCredential is not supported on this device"));
        } else {
            b10.onCreateCredential(ctx, request, cancellationSignal, executor, callback);
        }
    }

    @Override // lb.c
    public boolean e(UnsatisfiedLinkError unsatisfiedLinkError, b0[] b0VarArr) {
        if (!(unsatisfiedLinkError instanceof a0)) {
            return false;
        }
        Log.e("SoLoader", "Checking /data/app missing libraries.");
        File file = new File(this.f13841d.getApplicationInfo().nativeLibraryDir);
        if (!file.exists()) {
            Log.e("SoLoader", "Native library directory " + file + " does not exist, exiting /data/app recovery.");
            return false;
        }
        ArrayList arrayList = new ArrayList();
        int length = b0VarArr.length;
        int i5 = 0;
        while (true) {
            if (i5 >= length) {
                break;
            }
            b0 b0Var = b0VarArr[i5];
            if (b0Var instanceof com.facebook.soloader.b) {
                com.facebook.soloader.b bVar = (com.facebook.soloader.b) b0Var;
                try {
                    for (g0 g0Var : bVar.f()) {
                        if (!new File(file, g0Var.f5099d).exists()) {
                            arrayList.add(g0Var.f5099d);
                        }
                    }
                    if (arrayList.isEmpty()) {
                        Log.e("SoLoader", "No libraries missing from " + file);
                        return false;
                    }
                    Log.e("SoLoader", "Missing libraries from " + file + ": " + arrayList.toString() + ", will run prepare on tbe backup so source");
                    bVar.d(0);
                } catch (Exception e9) {
                    Log.e("SoLoader", "Encountered an exception while recovering from /data/app failure ", e9);
                    return false;
                }
            } else {
                i5++;
            }
        }
        for (b0 b0Var2 : b0VarArr) {
            if ((b0Var2 instanceof com.facebook.soloader.e) && !(b0Var2 instanceof com.facebook.soloader.b)) {
                com.facebook.soloader.e eVar = (com.facebook.soloader.e) b0Var2;
                eVar.f5092b = 1 | eVar.f5092b;
            }
        }
        Log.e("SoLoader", "Successfully recovered from /data/app disk failure.");
        return true;
    }

    @Override // androidx.credentials.CredentialManager
    public void f(w request, com.discord.misc.utilities.threading.a executor, d callback) {
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
        j b10 = m.b(new m(this.f13841d, 1), request);
        if (b10 == null) {
            callback.e(new q1.c("No Credential Manager provider found"));
        } else {
            b10.onSignalCredentialState(request, executor, callback);
        }
    }

    public a(ReactApplicationContext context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.f13841d = context;
    }
}
