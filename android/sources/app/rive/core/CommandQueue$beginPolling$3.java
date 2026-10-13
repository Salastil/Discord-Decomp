package app.rive.core;

import app.rive.RiveLog;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Ref;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.core.CommandQueue$beginPolling$3", f = "CommandQueue.kt", l = {413}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nCommandQueue.kt\nKotlin\n*S Kotlin\n*F\n+ 1 CommandQueue.kt\napp/rive/core/CommandQueue$beginPolling$3\n+ 2 RiveLog.kt\napp/rive/RiveLog\n*L\n1#1,2667:1\n57#2:2668\n57#2:2669\n*S KotlinDebug\n*F\n+ 1 CommandQueue.kt\napp/rive/core/CommandQueue$beginPolling$3\n*L\n410#1:2668\n430#1:2669\n*E\n"})
/* loaded from: classes.dex */
public final class CommandQueue$beginPolling$3 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ FrameTicker $ticker;
    private /* synthetic */ Object L$0;
    Object L$1;
    int label;
    final /* synthetic */ CommandQueue this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public CommandQueue$beginPolling$3(CommandQueue commandQueue, FrameTicker frameTicker, Continuation continuation) {
        super(2, continuation);
        this.this$0 = commandQueue;
        this.$ticker = frameTicker;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        CommandQueue$beginPolling$3 commandQueue$beginPolling$3 = new CommandQueue$beginPolling$3(this.this$0, this.$ticker, continuation);
        commandQueue$beginPolling$3.L$0 = obj;
        return commandQueue$beginPolling$3;
    }

    /* JADX WARN: Code restructure failed: missing block: B:6:0x005d, code lost:
    
        if (r1.element == false) goto L9;
     */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:12:0x0058 -> B:5:0x005b). Please report as a decompilation issue!!! */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(@NotNull Object obj) {
        CoroutineScope coroutineScope;
        final Ref.BooleanRef booleanRef;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            CoroutineScope coroutineScope2 = (CoroutineScope) this.L$0;
            RiveLog.INSTANCE.getLogger().d(CommandQueueKt.COMMAND_QUEUE_TAG, new Function0<String>() { // from class: app.rive.core.CommandQueue$beginPolling$3.1
                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return "Starting command queue polling";
                }
            });
            coroutineScope = coroutineScope2;
            if (x.s(coroutineScope) && !this.this$0.isDisposed()) {
                booleanRef = new Ref.BooleanRef();
                FrameTicker frameTicker = this.$ticker;
                final CommandQueue commandQueue = this.this$0;
                Function1<Long, Unit> function1 = new Function1<Long, Unit>() { // from class: app.rive.core.CommandQueue$beginPolling$3.2
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(1);
                    }

                    @Override // kotlin.jvm.functions.Function1
                    public /* bridge */ /* synthetic */ Object invoke(Object obj2) {
                        invoke(((Number) obj2).longValue());
                        return Unit.a;
                    }

                    public final void invoke(long j) {
                        try {
                            CommandQueue.this.pollMessages();
                        } catch (IllegalStateException e9) {
                            if (!CommandQueue.this.isDisposed()) {
                                throw e9;
                            }
                            booleanRef.element = true;
                        }
                    }
                };
                this.L$0 = coroutineScope;
                this.L$1 = booleanRef;
                this.label = 1;
                if (frameTicker.withFrame(function1, this) == aVar) {
                    return aVar;
                }
            }
            RiveLog.INSTANCE.getLogger().d(CommandQueueKt.COMMAND_QUEUE_TAG, new Function0<String>() { // from class: app.rive.core.CommandQueue$beginPolling$3.3
                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return "Stopping command queue polling";
                }
            });
            return Unit.a;
        }
        if (i5 != 1) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        booleanRef = (Ref.BooleanRef) this.L$1;
        coroutineScope = (CoroutineScope) this.L$0;
        b.R(obj);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
        return ((CommandQueue$beginPolling$3) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
