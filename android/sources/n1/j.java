package n1;

import android.content.Context;
import android.os.CancellationSignal;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public interface j {
    boolean isAvailableOnDevice();

    void onCreateCredential(Context context, b bVar, CancellationSignal cancellationSignal, Executor executor, h hVar);

    void onGetCredential(Context context, p pVar, CancellationSignal cancellationSignal, Executor executor, h hVar);

    default void onSignalCredentialState(w request, Executor executor, h callback) {
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
    }
}
