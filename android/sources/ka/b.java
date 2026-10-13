package ka;

import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.producers.ProducerContext;
import com.facebook.imagepipeline.producers.c;
import com.facebook.imagepipeline.producers.d1;
import com.facebook.imagepipeline.producers.e0;
import com.facebook.imagepipeline.producers.s0;
import com.facebook.imagepipeline.producers.z0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b extends y8.a {

    /* renamed from: h, reason: collision with root package name */
    public final d1 f13242h;

    /* renamed from: i, reason: collision with root package name */
    public final e0 f13243i;
    public final /* synthetic */ int j;

    public b(z0 producer, d1 settableProducerContext, e0 requestListener, int i5) {
        this.j = i5;
        Intrinsics.checkNotNullParameter(producer, "producer");
        Intrinsics.checkNotNullParameter(settableProducerContext, "settableProducerContext");
        Intrinsics.checkNotNullParameter(requestListener, "requestListener");
        this.f13242h = settableProducerContext;
        this.f13243i = requestListener;
        ta.a.D();
        this.a = settableProducerContext.f4721x;
        ta.a.D();
        requestListener.j(settableProducerContext);
        ta.a.D();
        producer.b(new s0(1, this), settableProducerContext);
    }

    @Override // y8.a, com.facebook.datasource.DataSource
    public final boolean close() {
        if (!super.close()) {
            return false;
        }
        if (isFinished()) {
            return true;
        }
        e0 e0Var = this.f13243i;
        d1 d1Var = this.f13242h;
        e0Var.h(d1Var);
        d1Var.e();
        return true;
    }

    @Override // y8.a
    public void e(Object obj) {
        switch (this.j) {
            case 0:
                CloseableReference.l((CloseableReference) obj);
                break;
        }
    }

    @Override // y8.a, com.facebook.datasource.DataSource
    public Object getResult() {
        switch (this.j) {
            case 0:
                return CloseableReference.g((CloseableReference) super.getResult());
            default:
                return super.getResult();
        }
    }

    public final void l(Object obj, int i5, ProducerContext producerContext) {
        Intrinsics.checkNotNullParameter(producerContext, "producerContext");
        boolean d6 = c.d(i5);
        Intrinsics.checkNotNullParameter(producerContext, "producerContext");
        if (j(obj, d6, producerContext.getExtras()) && d6) {
            this.f13243i.d(this.f13242h);
        }
    }
}
