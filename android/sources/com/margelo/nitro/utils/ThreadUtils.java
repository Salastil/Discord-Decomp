package com.margelo.nitro.utils;

import android.os.Handler;
import android.os.Looper;
import androidx.annotation.Keep;
import com.facebook.react.devsupport.StackTraceHelper;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import ya.a;

@Keep
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\b\u0007\u0018\u0000 \u00042\u00020\u0001:\u0001\u0004B\u0007¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0005"}, d2 = {"Lcom/margelo/nitro/utils/ThreadUtils;", "", "<init>", "()V", "Companion", "react-native-nitro-modules_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@a
/* loaded from: classes3.dex */
public final class ThreadUtils {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion();

    @NotNull
    private static final Handler handler = new Handler(Looper.getMainLooper());

    @Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001J\u000f\u0010\u0003\u001a\u00020\u0002H\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\u0017\u0010\u0007\u001a\u00020\u00062\u0006\u0010\u0005\u001a\u00020\u0002H\u0007¢\u0006\u0004\b\u0007\u0010\bJ\u000f\u0010\n\u001a\u00020\tH\u0007¢\u0006\u0004\b\n\u0010\u000bJ\u0017\u0010\u000e\u001a\u00020\u00062\u0006\u0010\r\u001a\u00020\fH\u0007¢\u0006\u0004\b\u000e\u0010\u000fR\u0014\u0010\u0011\u001a\u00020\u00108\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0011\u0010\u0012¨\u0006\u0013"}, d2 = {"Lcom/margelo/nitro/utils/ThreadUtils$Companion;", "", "", "getCurrentThreadName", "()Ljava/lang/String;", StackTraceHelper.NAME_KEY, "", "setCurrentThreadName", "(Ljava/lang/String;)V", "", "isOnUIThread", "()Z", "Ljava/lang/Runnable;", "runnable", "runOnUIThread", "(Ljava/lang/Runnable;)V", "Landroid/os/Handler;", "handler", "Landroid/os/Handler;", "react-native-nitro-modules_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        @Keep
        @NotNull
        @a
        public final String getCurrentThreadName() {
            String name = Thread.currentThread().getName();
            Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
            return name;
        }

        @Keep
        @a
        public final boolean isOnUIThread() {
            return Intrinsics.areEqual(Looper.myLooper(), Looper.getMainLooper());
        }

        @Keep
        @a
        public final void runOnUIThread(@NotNull Runnable runnable) {
            Intrinsics.checkNotNullParameter(runnable, "runnable");
            ThreadUtils.handler.post(runnable);
        }

        @Keep
        @a
        public final void setCurrentThreadName(@NotNull String name) {
            Intrinsics.checkNotNullParameter(name, "name");
            Thread.currentThread().setName(name);
        }
    }

    @Keep
    @NotNull
    @a
    public static final String getCurrentThreadName() {
        return INSTANCE.getCurrentThreadName();
    }

    @Keep
    @a
    public static final boolean isOnUIThread() {
        return INSTANCE.isOnUIThread();
    }

    @Keep
    @a
    public static final void runOnUIThread(@NotNull Runnable runnable) {
        INSTANCE.runOnUIThread(runnable);
    }

    @Keep
    @a
    public static final void setCurrentThreadName(@NotNull String str) {
        INSTANCE.setCurrentThreadName(str);
    }
}
