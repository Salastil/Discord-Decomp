package f;

import androidx.activity.result.ActivityResultCallback;
import androidx.activity.result.contract.ActivityResultContract;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class c {
    public final ActivityResultCallback a;

    /* renamed from: b, reason: collision with root package name */
    public final ActivityResultContract f8292b;

    public c(ActivityResultContract contract, ActivityResultCallback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        Intrinsics.checkNotNullParameter(contract, "contract");
        this.a = callback;
        this.f8292b = contract;
    }
}
