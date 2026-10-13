package io.sentry.android.replay.capture;

import io.sentry.SentryLevel;
import io.sentry.android.replay.util.ReplayRunnable;
import io.sentry.v5;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.atomic.AtomicReference;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.properties.ReadWriteProperty;
import kotlin.reflect.KProperty;

@Metadata(d1 = {"\u0000-\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003*\u0001\u0000\b\n\u0018\u00002\u0012\u0012\u0006\u0012\u0004\u0018\u00010\u0002\u0012\u0006\u0012\u0004\u0018\u00018\u00000\u0001J&\u0010\u0005\u001a\u0004\u0018\u00018\u00002\b\u0010\u0006\u001a\u0004\u0018\u00010\u00022\n\u0010\u0007\u001a\u0006\u0012\u0002\b\u00030\bH\u0096\u0002¢\u0006\u0002\u0010\tJ\u0016\u0010\n\u001a\u00020\u000b2\f\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u000b0\rH\u0002J.\u0010\u000e\u001a\u00020\u000b2\b\u0010\u0006\u001a\u0004\u0018\u00010\u00022\n\u0010\u0007\u001a\u0006\u0012\u0002\b\u00030\b2\b\u0010\u0003\u001a\u0004\u0018\u00018\u0000H\u0096\u0002¢\u0006\u0002\u0010\u000fR\u0016\u0010\u0003\u001a\n\u0012\u0006\u0012\u0004\u0018\u00018\u00000\u0004X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0010"}, d2 = {"io/sentry/android/replay/capture/BaseCaptureStrategy$persistableAtomicNullable$2", "Lkotlin/properties/ReadWriteProperty;", "", "value", "Ljava/util/concurrent/atomic/AtomicReference;", "getValue", "thisRef", "property", "Lkotlin/reflect/KProperty;", "(Ljava/lang/Object;Lkotlin/reflect/KProperty;)Ljava/lang/Object;", "runInBackground", "", "task", "Lkotlin/Function0;", "setValue", "(Ljava/lang/Object;Lkotlin/reflect/KProperty;Ljava/lang/Object;)V", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nBaseCaptureStrategy.kt\nKotlin\n*S Kotlin\n*F\n+ 1 BaseCaptureStrategy.kt\nio/sentry/android/replay/capture/BaseCaptureStrategy$persistableAtomicNullable$2\n*L\n1#1,221:1\n*E\n"})
/* loaded from: classes3.dex */
public final class BaseCaptureStrategy$persistableAtomicNullable$2 implements ReadWriteProperty {
    final /* synthetic */ Function3 $onChange;
    final /* synthetic */ String $propertyName;
    final /* synthetic */ BaseCaptureStrategy this$0;
    private final AtomicReference<T> value;

    public BaseCaptureStrategy$persistableAtomicNullable$2(T t5, BaseCaptureStrategy baseCaptureStrategy, Function3 function3, String str) {
        this.this$0 = baseCaptureStrategy;
        this.$onChange = function3;
        this.$propertyName = str;
        this.value = new AtomicReference<>(t5);
    }

    private final void runInBackground(final Function0<Unit> task) {
        v5 v5Var;
        v5 v5Var2;
        ScheduledExecutorService persistingExecutor;
        v5Var = this.this$0.options;
        if (v5Var.getThreadChecker().c()) {
            persistingExecutor = this.this$0.getPersistingExecutor();
            persistingExecutor.submit(new ReplayRunnable("CaptureStrategy.runInBackground", new Runnable() { // from class: io.sentry.android.replay.capture.BaseCaptureStrategy$persistableAtomicNullable$2$runInBackground$1
                @Override // java.lang.Runnable
                public final void run() {
                    task.invoke();
                }
            }));
            return;
        }
        try {
            task.invoke();
        } catch (Throwable th2) {
            v5Var2 = this.this$0.options;
            v5Var2.getLogger().k(SentryLevel.ERROR, "Failed to execute task CaptureStrategy.runInBackground", th2);
        }
    }

    /* JADX WARN: Type inference failed for: r1v3, types: [T, java.lang.Object] */
    @Override // vo.d
    public T getValue(Object thisRef, KProperty property) {
        Intrinsics.checkNotNullParameter(property, "property");
        return this.value.get();
    }

    @Override // kotlin.properties.ReadWriteProperty
    public void setValue(Object thisRef, KProperty property, final T value) {
        Intrinsics.checkNotNullParameter(property, "property");
        final Object andSet = this.value.getAndSet(value);
        if (Intrinsics.areEqual(andSet, value)) {
            return;
        }
        final Function3 function3 = this.$onChange;
        final String str = this.$propertyName;
        runInBackground(new Function0<Unit>() { // from class: io.sentry.android.replay.capture.BaseCaptureStrategy$persistableAtomicNullable$2$setValue$1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Object invoke() {
                m1286invoke();
                return Unit.a;
            }

            /* renamed from: invoke, reason: collision with other method in class */
            public final void m1286invoke() {
                Function3.this.invoke(str, andSet, value);
            }
        });
    }
}
