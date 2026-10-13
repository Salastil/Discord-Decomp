package com.google.android.gms.tasks;

import androidx.annotation.NonNull;
import java.util.concurrent.Executor;
import jg.a;
import jg.b;
import jg.c;
import jg.d;
import jg.f;
import jg.l;

/* loaded from: classes3.dex */
public abstract class Task<TResult> {
    public void a(Executor executor, b bVar) {
        throw new UnsupportedOperationException("addOnCanceledListener is not implemented");
    }

    @NonNull
    public Task<TResult> addOnCompleteListener(@NonNull OnCompleteListener<TResult> onCompleteListener) {
        throw new UnsupportedOperationException("addOnCompleteListener is not implemented");
    }

    public void b(Executor executor, OnCompleteListener onCompleteListener) {
        throw new UnsupportedOperationException("addOnCompleteListener is not implemented");
    }

    public abstract l c(Executor executor, c cVar);

    public abstract l d(Executor executor, d dVar);

    public abstract l e(d dVar);

    public Task f(Executor executor, a aVar) {
        throw new UnsupportedOperationException("continueWith is not implemented");
    }

    public Task g(Executor executor, a aVar) {
        throw new UnsupportedOperationException("continueWithTask is not implemented");
    }

    public abstract Exception h();

    public abstract Object i();

    public abstract Object j();

    public abstract boolean k();

    public abstract boolean l();

    public abstract boolean m();

    public Task n(Executor executor, f fVar) {
        throw new UnsupportedOperationException("onSuccessTask is not implemented");
    }
}
