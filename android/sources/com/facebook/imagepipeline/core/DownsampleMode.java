package com.facebook.imagepipeline.core;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class DownsampleMode {

    /* renamed from: d, reason: collision with root package name */
    public static final DownsampleMode f4592d;

    /* renamed from: e, reason: collision with root package name */
    public static final DownsampleMode f4593e;

    /* renamed from: i, reason: collision with root package name */
    public static final DownsampleMode f4594i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ DownsampleMode[] f4595v;

    static {
        DownsampleMode downsampleMode = new DownsampleMode("ALWAYS", 0);
        f4592d = downsampleMode;
        DownsampleMode downsampleMode2 = new DownsampleMode("AUTO", 1);
        f4593e = downsampleMode2;
        DownsampleMode downsampleMode3 = new DownsampleMode("NEVER", 2);
        f4594i = downsampleMode3;
        DownsampleMode[] downsampleModeArr = {downsampleMode, downsampleMode2, downsampleMode3};
        f4595v = downsampleModeArr;
        ki.b.p(downsampleModeArr);
    }

    public static DownsampleMode valueOf(String str) {
        return (DownsampleMode) Enum.valueOf(DownsampleMode.class, str);
    }

    public static DownsampleMode[] values() {
        return (DownsampleMode[]) f4595v.clone();
    }
}
