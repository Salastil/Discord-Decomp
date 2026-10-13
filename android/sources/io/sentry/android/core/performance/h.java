package io.sentry.android.core.performance;

import android.view.Window;
import com.appsflyer.internal.p;
import io.sentry.android.core.internal.gestures.i;

/* loaded from: classes3.dex */
public final class h extends i {

    /* renamed from: e, reason: collision with root package name */
    public final p f11300e;

    public h(Window.Callback callback, p pVar) {
        super(callback);
        this.f11300e = pVar;
    }

    @Override // io.sentry.android.core.internal.gestures.i, android.view.Window.Callback
    public final void onContentChanged() {
        super.onContentChanged();
        this.f11300e.run();
    }
}
