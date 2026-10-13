package oi;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.Executor;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class i implements Executor {

    /* renamed from: d, reason: collision with root package name */
    public static final i f15997d;

    /* renamed from: e, reason: collision with root package name */
    public static final Handler f15998e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ i[] f15999i;

    static {
        i iVar = new i("INSTANCE", 0);
        f15997d = iVar;
        f15999i = new i[]{iVar};
        f15998e = new Handler(Looper.getMainLooper());
    }

    public static i valueOf(String str) {
        return (i) Enum.valueOf(i.class, str);
    }

    public static i[] values() {
        return (i[]) f15999i.clone();
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        f15998e.post(runnable);
    }
}
