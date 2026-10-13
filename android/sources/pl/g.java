package pl;

import android.util.Log;
import com.facebook.react.bridge.Promise;
import com.reactnativedocumentpicker.NativeDocumentPickerSpec;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g {
    public Promise a;

    /* renamed from: b, reason: collision with root package name */
    public String f16452b;

    public final void a(String code, Exception e9) {
        Intrinsics.checkNotNullParameter(code, "code");
        Intrinsics.checkNotNullParameter(e9, "e");
        String localizedMessage = e9.getLocalizedMessage();
        if (localizedMessage == null && (localizedMessage = e9.getMessage()) == null) {
            localizedMessage = "unknown error";
        }
        b(code, localizedMessage, e9);
    }

    public final void b(String code, String message, Exception exc) {
        Intrinsics.checkNotNullParameter(code, "code");
        Intrinsics.checkNotNullParameter(message, "message");
        Promise promise = this.a;
        if (promise == null) {
            Log.e(NativeDocumentPickerSpec.NAME, "cannot reject promise because it's null");
            return;
        }
        this.f16452b = null;
        this.a = null;
        promise.reject(code, message, exc);
    }

    public final void c(Object obj) {
        Promise promise = this.a;
        if (promise == null) {
            Log.e(NativeDocumentPickerSpec.NAME, "cannot resolve promise because it's null");
            return;
        }
        this.f16452b = null;
        this.a = null;
        promise.resolve(obj);
    }

    public final boolean d(Promise promise, String fromCallsite) {
        Intrinsics.checkNotNullParameter(promise, "promise");
        Intrinsics.checkNotNullParameter(fromCallsite, "fromCallsite");
        if (this.a != null) {
            promise.reject("ASYNC_OP_IN_PROGRESS", s4.h.g("Warning: previous promise did not settle and you attempted to overwrite it. You've called \"", fromCallsite, "\" while \"", this.f16452b, "\" was already in progress and has not completed yet."));
            return false;
        }
        this.a = promise;
        this.f16452b = fromCallsite;
        return true;
    }
}
