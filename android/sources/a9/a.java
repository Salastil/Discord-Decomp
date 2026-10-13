package a9;

import android.graphics.Color;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class a {
    public static final l8.a a;

    /* renamed from: b, reason: collision with root package name */
    public static final l8.a f245b;

    /* renamed from: c, reason: collision with root package name */
    public static final l8.a f246c;

    static {
        Intrinsics.checkNotNullParameter("Performance", StackTraceHelper.NAME_KEY);
        Intrinsics.checkNotNullParameter("Markers for Performance", "description");
        Color.rgb(156, 39, 176);
        Intrinsics.checkNotNullParameter("Navigation", StackTraceHelper.NAME_KEY);
        Intrinsics.checkNotNullParameter("Tag for navigation", "description");
        a = new l8.a("RN Core", "Tag for React Native Core");
        Intrinsics.checkNotNullParameter("Bridge Calls", StackTraceHelper.NAME_KEY);
        Intrinsics.checkNotNullParameter("JS to Java calls (warning: this is spammy)", "description");
        Color.rgb(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, 0, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        f245b = new l8.a("Native Module", "Native Module init");
        f246c = new l8.a("UI Manager", "UI Manager View Operations (requires restart\nwarning: this is spammy)");
    }
}
