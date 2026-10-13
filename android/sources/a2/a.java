package a2;

import android.content.Intent;
import android.credentials.CreateCredentialException;
import android.credentials.CreateCredentialResponse;
import android.credentials.Credential;
import android.credentials.GetCredentialException;
import android.credentials.GetCredentialResponse;
import android.graphics.Rect;
import android.os.Bundle;
import android.view.VelocityTracker;
import android.view.ViewConfiguration;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.TextView;
import android.window.BackEvent;
import kotlin.jvm.internal.Intrinsics;
import n1.c;
import n1.q;
import nf.e;
import o1.d;
import o1.l;

/* loaded from: classes.dex */
public abstract class a {
    public static d a(Intent intent) {
        Intrinsics.checkNotNullParameter(intent, "intent");
        CreateCredentialException createCredentialException = (CreateCredentialException) intent.getSerializableExtra("android.service.credentials.extra.CREATE_CREDENTIAL_EXCEPTION", CreateCredentialException.class);
        if (createCredentialException == null) {
            return null;
        }
        String type = createCredentialException.getType();
        Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
        return io.sentry.config.a.M(createCredentialException.getMessage(), type);
    }

    public static c b(Intent intent, String type) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(intent, "intent");
        CreateCredentialResponse createCredentialResponse = (CreateCredentialResponse) intent.getParcelableExtra("android.service.credentials.extra.CREATE_CREDENTIAL_RESPONSE", CreateCredentialResponse.class);
        if (createCredentialResponse == null) {
            return null;
        }
        Bundle data = createCredentialResponse.getData();
        Intrinsics.checkNotNullExpressionValue(data, "getData(...)");
        return e.g(type, data);
    }

    public static l c(Intent intent) {
        Intrinsics.checkNotNullParameter(intent, "intent");
        GetCredentialException getCredentialException = (GetCredentialException) intent.getSerializableExtra("android.service.credentials.extra.GET_CREDENTIAL_EXCEPTION", GetCredentialException.class);
        if (getCredentialException == null) {
            return null;
        }
        String type = getCredentialException.getType();
        Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
        return io.sentry.config.a.N(getCredentialException.getMessage(), type);
    }

    public static q d(Intent intent) {
        Intrinsics.checkNotNullParameter(intent, "intent");
        GetCredentialResponse getCredentialResponse = (GetCredentialResponse) intent.getParcelableExtra("android.service.credentials.extra.GET_CREDENTIAL_RESPONSE", GetCredentialResponse.class);
        if (getCredentialResponse == null) {
            return null;
        }
        Credential credential = getCredentialResponse.getCredential();
        Intrinsics.checkNotNullExpressionValue(credential, "getCredential(...)");
        Intrinsics.checkNotNullParameter(credential, "credential");
        String type = credential.getType();
        Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
        Bundle data = credential.getData();
        Intrinsics.checkNotNullExpressionValue(data, "getData(...)");
        return new q(nt.a.i(type, data));
    }

    public static AccessibilityNodeInfo.AccessibilityAction e() {
        return AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_IN_DIRECTION;
    }

    public static float f(VelocityTracker velocityTracker, int i5) {
        return velocityTracker.getAxisVelocity(i5);
    }

    public static void g(AccessibilityNodeInfo accessibilityNodeInfo, Rect rect) {
        accessibilityNodeInfo.getBoundsInWindow(rect);
    }

    public static CharSequence h(AccessibilityNodeInfo accessibilityNodeInfo) {
        return accessibilityNodeInfo.getContainerTitle();
    }

    public static int i(ViewConfiguration viewConfiguration, int i5, int i6, int i10) {
        return viewConfiguration.getScaledMaximumFlingVelocity(i5, i6, i10);
    }

    public static int j(ViewConfiguration viewConfiguration, int i5, int i6, int i10) {
        return viewConfiguration.getScaledMinimumFlingVelocity(i5, i6, i10);
    }

    public static boolean k(AccessibilityNodeInfo accessibilityNodeInfo) {
        return accessibilityNodeInfo.isAccessibilityDataSensitive();
    }

    public static float l(BackEvent backEvent) {
        Intrinsics.checkNotNullParameter(backEvent, "backEvent");
        return backEvent.getProgress();
    }

    public static void m(TextView textView, int i5, float f2) {
        textView.setLineHeight(i5, f2);
    }

    public static int n(BackEvent backEvent) {
        Intrinsics.checkNotNullParameter(backEvent, "backEvent");
        return backEvent.getSwipeEdge();
    }

    public static float o(BackEvent backEvent) {
        Intrinsics.checkNotNullParameter(backEvent, "backEvent");
        return backEvent.getTouchX();
    }

    public static float p(BackEvent backEvent) {
        Intrinsics.checkNotNullParameter(backEvent, "backEvent");
        return backEvent.getTouchY();
    }
}
