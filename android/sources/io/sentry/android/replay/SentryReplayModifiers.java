package io.sentry.android.replay;

import k0.j;
import kotlin.Metadata;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u001d\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00050\u00048\u0006¢\u0006\f\n\u0004\b\u0006\u0010\u0007\u001a\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lio/sentry/android/replay/SentryReplayModifiers;", "", "<init>", "()V", "Lk0/j;", "", "SentryPrivacy", "Lk0/j;", "getSentryPrivacy", "()Lk0/j;", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class SentryReplayModifiers {

    @NotNull
    public static final SentryReplayModifiers INSTANCE = new SentryReplayModifiers();

    @NotNull
    private static final j SentryPrivacy = new j("SentryPrivacy", new Function2<String, String, String>() { // from class: io.sentry.android.replay.SentryReplayModifiers$SentryPrivacy$1
        @Override // kotlin.jvm.functions.Function2
        public final String invoke(String str, String str2) {
            Intrinsics.checkNotNullParameter(str2, "<anonymous parameter 1>");
            return str;
        }
    });
    public static final int $stable = 0;

    private SentryReplayModifiers() {
    }

    @NotNull
    public final j getSentryPrivacy() {
        return SentryPrivacy;
    }
}
