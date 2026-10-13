package app.rive.core;

import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicLong;
import ki.b;
import ko.f;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import nr.j;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\n\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\u0010\u0000\u001a\u0002H\u0001\"\u0006\b\u0000\u0010\u0001\u0018\u0001*\u00020\u0002H\u008a@¨\u0006\u0003"}, d2 = {"<anonymous>", "T", "Lkotlinx/coroutines/CoroutineScope;", "app/rive/core/CommandQueue$suspendNativeRequest$2"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.core.CommandQueue$decodeFont-sOckvAc$$inlined$suspendNativeRequest$1", f = "CommandQueue.kt", l = {2668}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nCommandQueue.kt\nKotlin\n*S Kotlin\n*F\n+ 1 CommandQueue.kt\napp/rive/core/CommandQueue$suspendNativeRequest$2\n+ 2 CancellableContinuation.kt\nkotlinx/coroutines/CancellableContinuationKt\n+ 3 CommandQueue.kt\napp/rive/core/CommandQueue\n*L\n1#1,2667:1\n318#2,9:2668\n327#2,2:2679\n2071#3,2:2677\n*S KotlinDebug\n*F\n+ 1 CommandQueue.kt\napp/rive/core/CommandQueue$suspendNativeRequest$2\n*L\n2509#1:2668,9\n2509#1:2679,2\n*E\n"})
/* renamed from: app.rive.core.CommandQueue$decodeFont-sOckvAc$$inlined$suspendNativeRequest$1, reason: invalid class name */
/* loaded from: classes.dex */
public final class CommandQueue$decodeFontsOckvAc$$inlined$suspendNativeRequest$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ byte[] $bytes$inlined;
    Object L$0;
    Object L$1;
    int label;
    final /* synthetic */ CommandQueue this$0;
    final /* synthetic */ CommandQueue this$0$inline_fun;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public CommandQueue$decodeFontsOckvAc$$inlined$suspendNativeRequest$1(CommandQueue commandQueue, Continuation continuation, CommandQueue commandQueue2, byte[] bArr) {
        super(2, continuation);
        this.this$0$inline_fun = commandQueue;
        this.this$0 = commandQueue2;
        this.$bytes$inlined = bArr;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new CommandQueue$decodeFontsOckvAc$$inlined$suspendNativeRequest$1(this.this$0$inline_fun, continuation, this.this$0, this.$bytes$inlined);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        AtomicLong atomicLong;
        ConcurrentHashMap concurrentHashMap;
        ConcurrentHashMap concurrentHashMap2;
        CommandQueueBridge commandQueueBridge;
        RCPointer rCPointer;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 != 0) {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
            return obj;
        }
        b.R(obj);
        final CommandQueue commandQueue = this.this$0$inline_fun;
        this.L$0 = commandQueue;
        this.label = 1;
        j jVar = new j(1, f.b(this));
        jVar.t();
        atomicLong = commandQueue.nextRequestID;
        final long andIncrement = atomicLong.getAndIncrement();
        Long l6 = new Long(andIncrement);
        concurrentHashMap = commandQueue.pendingContinuations;
        concurrentHashMap.put(l6, jVar);
        jVar.v(new Function1<Throwable, Unit>() { // from class: app.rive.core.CommandQueue$decodeFont-sOckvAc$$inlined$suspendNativeRequest$1.1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            public /* bridge */ /* synthetic */ Object invoke(Object obj2) {
                invoke((Throwable) obj2);
                return Unit.a;
            }

            public final void invoke(Throwable th2) {
                ConcurrentHashMap concurrentHashMap3;
                concurrentHashMap3 = CommandQueue.this.pendingContinuations;
                concurrentHashMap3.remove(Long.valueOf(andIncrement));
            }
        });
        try {
            commandQueueBridge = this.this$0.bridge;
            rCPointer = this.this$0.cppPointer;
            commandQueueBridge.cppDecodeFont(rCPointer.getPointer(), andIncrement, this.$bytes$inlined);
            Object r5 = jVar.r();
            if (r5 == aVar) {
                Intrinsics.checkNotNullParameter(this, "frame");
            }
            return r5 == aVar ? aVar : r5;
        } catch (Throwable th2) {
            concurrentHashMap2 = commandQueue.pendingContinuations;
            concurrentHashMap2.remove(new Long(andIncrement));
            throw th2;
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
        return ((CommandQueue$decodeFontsOckvAc$$inlined$suspendNativeRequest$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
