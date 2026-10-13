package io.sentry.android.replay;

import androidx.compose.ui.semantics.AppendedSemanticsElement;
import java.util.concurrent.atomic.AtomicInteger;
import k0.e;
import k0.g;
import k0.k;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import z.f;

@Metadata(d1 = {"\u0000\b\n\u0002\u0018\u0002\n\u0002\b\u0004\u001a\u0011\u0010\u0001\u001a\u00020\u0000*\u00020\u0000¢\u0006\u0004\b\u0001\u0010\u0002\u001a\u0011\u0010\u0003\u001a\u00020\u0000*\u00020\u0000¢\u0006\u0004\b\u0003\u0010\u0002¨\u0006\u0004"}, d2 = {"Lz/f;", "sentryReplayMask", "(Lz/f;)Lz/f;", "sentryReplayUnmask", "sentry-android-replay_release"}, k = 2, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class ModifierExtensionsKt {
    @NotNull
    public static final f sentryReplayMask(@NotNull f fVar) {
        Intrinsics.checkNotNullParameter(fVar, "<this>");
        ModifierExtensionsKt$sentryReplayMask$1 properties = new Function1<k, Unit>() { // from class: io.sentry.android.replay.ModifierExtensionsKt$sentryReplayMask$1
            @Override // kotlin.jvm.functions.Function1
            public /* bridge */ /* synthetic */ Object invoke(Object obj) {
                invoke((k) obj);
                return Unit.a;
            }

            public final void invoke(k semantics) {
                Intrinsics.checkNotNullParameter(semantics, "$this$semantics");
                ((e) semantics).a(SentryReplayModifiers.INSTANCE.getSentryPrivacy(), "mask");
            }
        };
        AtomicInteger atomicInteger = g.a;
        Intrinsics.checkNotNullParameter(fVar, "<this>");
        Intrinsics.checkNotNullParameter(properties, "properties");
        return fVar.then(new AppendedSemanticsElement(false, properties));
    }

    @NotNull
    public static final f sentryReplayUnmask(@NotNull f fVar) {
        Intrinsics.checkNotNullParameter(fVar, "<this>");
        ModifierExtensionsKt$sentryReplayUnmask$1 properties = new Function1<k, Unit>() { // from class: io.sentry.android.replay.ModifierExtensionsKt$sentryReplayUnmask$1
            @Override // kotlin.jvm.functions.Function1
            public /* bridge */ /* synthetic */ Object invoke(Object obj) {
                invoke((k) obj);
                return Unit.a;
            }

            public final void invoke(k semantics) {
                Intrinsics.checkNotNullParameter(semantics, "$this$semantics");
                ((e) semantics).a(SentryReplayModifiers.INSTANCE.getSentryPrivacy(), "unmask");
            }
        };
        AtomicInteger atomicInteger = g.a;
        Intrinsics.checkNotNullParameter(fVar, "<this>");
        Intrinsics.checkNotNullParameter(properties, "properties");
        return fVar.then(new AppendedSemanticsElement(false, properties));
    }
}
