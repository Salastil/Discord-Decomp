package com.discord.image.fresco.tiled;

import com.facebook.datasource.DataSource;
import f4.n;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import y8.c;

@Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u0010\u0004\u001a\u000f\u0012\u0004\u0012\u00020\u0002\u0018\u00010\u0001¢\u0006\u0002\b\u0003*\u00020\u0000H\n¢\u0006\u0004\b\u0004\u0010\u0005"}, d2 = {"Lkotlinx/coroutines/CoroutineScope;", "Lcom/facebook/common/references/CloseableReference;", "Loa/c;", "Lkotlin/jvm/internal/EnhancedNullability;", "<anonymous>", "(Lkotlinx/coroutines/CoroutineScope;)Lcom/facebook/common/references/CloseableReference;"}, k = 3, mv = {2, 1, 0})
@d(c = "com.discord.image.fresco.tiled.TiledDraweeController$load$1$closableImageReference$1", f = "TiledDraweeController.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class TiledDraweeController$load$1$closableImageReference$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ DataSource $dataSource;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public TiledDraweeController$load$1$closableImageReference$1(DataSource dataSource, Continuation continuation) {
        super(2, continuation);
        this.$dataSource = dataSource;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new TiledDraweeController$load$1$closableImageReference$1(this.$dataSource, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        DataSource dataSource = this.$dataSource;
        TimeUnit timeUnit = TimeUnit.MILLISECONDS;
        CountDownLatch countDownLatch = new CountDownLatch(1);
        l1.d dVar = new l1.d();
        l1.d dVar2 = new l1.d();
        dataSource.d(new c(dVar, countDownLatch, dVar2), new n(4));
        countDownLatch.await();
        Object obj2 = dVar2.a;
        if (obj2 == null) {
            return dVar.a;
        }
        throw ((Throwable) obj2);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((TiledDraweeController$load$1$closableImageReference$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
