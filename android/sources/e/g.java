package e;

import android.content.Intent;
import android.content.IntentSender;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import androidx.activity.ComponentActivity;
import androidx.activity.result.ActivityResultRegistry;
import androidx.activity.result.contract.ActivityResultContract;
import java.util.Arrays;
import java.util.HashSet;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class g extends ActivityResultRegistry {

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ ComponentActivity f7817h;

    public g(ComponentActivity componentActivity) {
        this.f7817h = componentActivity;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // androidx.activity.result.ActivityResultRegistry
    public final void b(int i5, ActivityResultContract contract, Object obj, x0.f fVar) {
        Bundle g6;
        int i6;
        Intrinsics.checkNotNullParameter(contract, "contract");
        ComponentActivity componentActivity = this.f7817h;
        u4.b b10 = contract.b(componentActivity, obj);
        if (b10 != null) {
            new Handler(Looper.getMainLooper()).post(new bb.a(this, i5, b10, 5));
            return;
        }
        Intent a = contract.a(componentActivity, obj);
        if (a.getExtras() != null) {
            Bundle extras = a.getExtras();
            Intrinsics.checkNotNull(extras);
            if (extras.getClassLoader() == null) {
                a.setExtrasClassLoader(componentActivity.getClassLoader());
            }
        }
        if (a.hasExtra("androidx.activity.result.contract.extra.ACTIVITY_OPTIONS_BUNDLE")) {
            g6 = a.getBundleExtra("androidx.activity.result.contract.extra.ACTIVITY_OPTIONS_BUNDLE");
            a.removeExtra("androidx.activity.result.contract.extra.ACTIVITY_OPTIONS_BUNDLE");
        } else {
            g6 = fVar != null ? fVar.g() : null;
        }
        Bundle bundle = g6;
        if (Intrinsics.areEqual("androidx.activity.result.contract.action.REQUEST_PERMISSIONS", a.getAction())) {
            String[] stringArrayExtra = a.getStringArrayExtra("androidx.activity.result.contract.extra.PERMISSIONS");
            if (stringArrayExtra == null) {
                stringArrayExtra = new String[0];
            }
            HashSet hashSet = new HashSet();
            for (int i10 = 0; i10 < stringArrayExtra.length; i10++) {
                if (TextUtils.isEmpty(stringArrayExtra[i10])) {
                    throw new IllegalArgumentException(com.discord.chat.bridge.botuikit.a.j(new StringBuilder("Permission request for permissions "), Arrays.toString(stringArrayExtra), " must not contain null or empty values"));
                }
                if (Build.VERSION.SDK_INT < 33 && TextUtils.equals(stringArrayExtra[i10], "android.permission.POST_NOTIFICATIONS")) {
                    hashSet.add(Integer.valueOf(i10));
                }
            }
            int size = hashSet.size();
            String[] strArr = size > 0 ? new String[stringArrayExtra.length - size] : stringArrayExtra;
            if (size > 0) {
                if (size == stringArrayExtra.length) {
                    return;
                }
                int i11 = 0;
                for (int i12 = 0; i12 < stringArrayExtra.length; i12++) {
                    if (!hashSet.contains(Integer.valueOf(i12))) {
                        strArr[i11] = stringArrayExtra[i12];
                        i11++;
                    }
                }
            }
            if (componentActivity instanceof x0.a) {
                ((x0.a) componentActivity).validateRequestPermissionsRequestCode(i5);
            }
            componentActivity.requestPermissions(stringArrayExtra, i5);
            return;
        }
        if (!Intrinsics.areEqual("androidx.activity.result.contract.action.INTENT_SENDER_REQUEST", a.getAction())) {
            componentActivity.startActivityForResult(a, i5, bundle);
            return;
        }
        f.h hVar = (f.h) a.getParcelableExtra("androidx.activity.result.contract.extra.INTENT_SENDER_REQUEST");
        try {
            Intrinsics.checkNotNull(hVar);
            i6 = i5;
            try {
                componentActivity.startIntentSenderForResult(hVar.f8298d, i6, hVar.f8299e, hVar.f8300i, hVar.f8301v, 0, bundle);
            } catch (IntentSender.SendIntentException e9) {
                e = e9;
                new Handler(Looper.getMainLooper()).post(new bb.a(this, i6, e, 6));
            }
        } catch (IntentSender.SendIntentException e10) {
            e = e10;
            i6 = i5;
        }
    }
}
