package com.discord.bundle_updater;

import android.content.Context;
import com.jakewharton.processphoenix.ProcessPhoenix;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import nr.x;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.bundle_updater.BundleUpdater$clearBundle$1", f = "BundleUpdater.kt", l = {437}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class BundleUpdater$clearBundle$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Context $context;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public BundleUpdater$clearBundle$1(Context context, Continuation continuation) {
        super(2, continuation);
        this.$context = context;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new BundleUpdater$clearBundle$1(this.$context, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            this.label = 1;
            if (x.j(1000L, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        ProcessPhoenix.a(this.$context);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((BundleUpdater$clearBundle$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
