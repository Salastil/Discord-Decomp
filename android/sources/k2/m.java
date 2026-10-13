package k2;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.ServiceInfo;
import android.os.Build;
import android.os.Bundle;
import android.util.Log;
import android.util.TypedValue;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.zip.GZIPInputStream;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class m implements i {
    public final Context a;

    public m(Context context, int i5) {
        switch (i5) {
            case 1:
                Intrinsics.checkNotNullParameter(context, "context");
                this.a = context;
                break;
            case 2:
                this.a = context;
                break;
            default:
                this.a = context.getApplicationContext();
                break;
        }
    }

    public static n1.j b(m mVar, Object request) {
        Intrinsics.checkNotNullParameter(request, "request");
        if (Intrinsics.areEqual(request, "androidx.credentials.TYPE_CLEAR_RESTORE_CREDENTIAL")) {
            return mVar.e();
        }
        if (request instanceof n1.p) {
            Iterator it = ((n1.p) request).a.iterator();
            while (it.hasNext()) {
                if (((n1.i) it.next()) instanceof n1.r) {
                    return mVar.e();
                }
            }
        } else if (request instanceof n1.w) {
            return mVar.e();
        }
        Context ctx = mVar.a;
        Intrinsics.checkNotNullParameter(ctx, "ctx");
        if (!ctx.getPackageManager().hasSystemFeature("android.software.leanback")) {
            Intrinsics.checkNotNullParameter(ctx, "ctx");
            if (!ctx.getPackageManager().hasSystemFeature("android.hardware.type.automotive")) {
                int i5 = Build.VERSION.SDK_INT;
                if (i5 >= 34) {
                    n1.m mVar2 = new n1.m(ctx);
                    n1.m mVar3 = mVar2.isAvailableOnDevice() ? mVar2 : null;
                    return mVar3 == null ? mVar.e() : mVar3;
                }
                if (i5 <= 33) {
                    return mVar.e();
                }
                return null;
            }
        }
        return mVar.e();
    }

    public static String c(File file) {
        String canonicalPath = file.getCanonicalPath();
        return !canonicalPath.endsWith("/") ? canonicalPath.concat("/") : canonicalPath;
    }

    @Override // k2.i
    public void a(w3.q qVar) {
        ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(0, 1, 15L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new a("EmojiCompatInitializer", 0));
        threadPoolExecutor.allowCoreThreadTimeOut(true);
        threadPoolExecutor.execute(new androidx.fragment.app.e(this, qVar, threadPoolExecutor, 27));
    }

    public InputStream d(String str) {
        if (str.length() > 1 && str.charAt(0) == '/') {
            str = str.substring(1);
        }
        String[] split = str.split("/", -1);
        if (split.length != 2) {
            throw new IllegalArgumentException("Incorrect resource path: ".concat(str));
        }
        String str2 = split[0];
        String str3 = split[1];
        int lastIndexOf = str3.lastIndexOf(46);
        if (lastIndexOf != -1) {
            str3 = str3.substring(0, lastIndexOf);
        }
        Context context = this.a;
        int identifier = context.getResources().getIdentifier(str3, str2, context.getPackageName());
        TypedValue typedValue = new TypedValue();
        context.getResources().getValue(identifier, typedValue, true);
        int i5 = typedValue.type;
        if (i5 != 3) {
            throw new IOException(String.format("Expected %s resource to be of TYPE_STRING but was %d", str, Integer.valueOf(i5)));
        }
        InputStream openRawResource = context.getResources().openRawResource(identifier);
        return str.endsWith(".svgz") ? new GZIPInputStream(openRawResource) : openRawResource;
    }

    public n1.j e() {
        String string;
        Context context = this.a;
        PackageInfo packageInfo = context.getPackageManager().getPackageInfo(context.getPackageName(), 132);
        ArrayList arrayList = new ArrayList();
        ServiceInfo[] serviceInfoArr = packageInfo.services;
        if (serviceInfoArr != null) {
            Intrinsics.checkNotNull(serviceInfoArr);
            for (ServiceInfo serviceInfo : serviceInfoArr) {
                Bundle bundle = serviceInfo.metaData;
                if (bundle != null && (string = bundle.getString("androidx.credentials.CREDENTIAL_PROVIDER_KEY")) != null) {
                    arrayList.add(string);
                }
            }
        }
        List i02 = CollectionsKt.i0(arrayList);
        if (i02.isEmpty()) {
            return null;
        }
        Iterator it = i02.iterator();
        n1.j jVar = null;
        while (it.hasNext()) {
            try {
                Object newInstance = Class.forName((String) it.next()).getConstructor(Context.class).newInstance(context);
                Intrinsics.checkNotNull(newInstance, "null cannot be cast to non-null type androidx.credentials.CredentialProvider");
                n1.j jVar2 = (n1.j) newInstance;
                if (!jVar2.isAvailableOnDevice()) {
                    continue;
                } else {
                    if (jVar != null) {
                        Log.i("CredProviderFactory", "Only one active OEM CredentialProvider allowed");
                        return null;
                    }
                    jVar = jVar2;
                }
            } catch (Throwable unused) {
            }
        }
        return jVar;
    }
}
