package com.facebook.imagepipeline.producers;

import com.facebook.common.references.CloseableReference;
import java.io.Closeable;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class s0 extends c {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f4804b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Object f4805c;

    public /* synthetic */ s0(int i5, Object obj) {
        this.f4804b = i5;
        this.f4805c = obj;
    }

    @Override // com.facebook.imagepipeline.producers.c
    public final void f() {
        switch (this.f4804b) {
            case 0:
                try {
                    ta.a.D();
                    t0 t0Var = (t0) this.f4805c;
                    synchronized (t0Var) {
                        try {
                            if (t0Var.f4814g == this) {
                                t0Var.f4814g = null;
                                t0Var.f4813f = null;
                                t0.b(t0Var.f4810c);
                                t0Var.f4810c = null;
                                t0Var.i(3);
                            }
                        } finally {
                        }
                    }
                    return;
                } finally {
                    ta.a.D();
                }
            default:
                ka.b bVar = (ka.b) this.f4805c;
                synchronized (bVar) {
                    o8.h.e(bVar.f());
                }
                return;
        }
    }

    @Override // com.facebook.imagepipeline.producers.c
    public final void g(Throwable throwable) {
        switch (this.f4804b) {
            case 0:
                try {
                    ta.a.D();
                    ((t0) this.f4805c).f(this, throwable);
                    return;
                } finally {
                    ta.a.D();
                }
            default:
                Intrinsics.checkNotNullParameter(throwable, "throwable");
                ka.b bVar = (ka.b) this.f4805c;
                d1 producerContext = bVar.f13242h;
                Intrinsics.checkNotNullParameter(producerContext, "producerContext");
                if (bVar.h(throwable, producerContext.getExtras())) {
                    bVar.f13243i.g(producerContext, throwable);
                    return;
                }
                return;
        }
    }

    @Override // com.facebook.imagepipeline.producers.c
    public final void h(int i5, Object obj) {
        switch (this.f4804b) {
            case 0:
                Closeable closeable = (Closeable) obj;
                try {
                    ta.a.D();
                    ((t0) this.f4805c).g(this, closeable, i5);
                    return;
                } finally {
                    ta.a.D();
                }
            default:
                ka.b bVar = (ka.b) this.f4805c;
                d1 d1Var = bVar.f13242h;
                switch (bVar.j) {
                    case 0:
                        bVar.l(CloseableReference.g((CloseableReference) obj), i5, d1Var);
                        return;
                    default:
                        bVar.l(obj, i5, d1Var);
                        return;
                }
        }
    }

    @Override // com.facebook.imagepipeline.producers.c
    public final void i(float f2) {
        switch (this.f4804b) {
            case 0:
                try {
                    ta.a.D();
                    ((t0) this.f4805c).h(this, f2);
                    return;
                } finally {
                    ta.a.D();
                }
            default:
                ((ka.b) this.f4805c).i(f2);
                return;
        }
    }
}
