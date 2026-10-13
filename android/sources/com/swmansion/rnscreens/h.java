package com.swmansion.rnscreens;

import android.view.View;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.s0;
import com.facebook.react.bridge.LifecycleEventListener;
import java.lang.ref.WeakReference;
import java.util.HashSet;
import java.util.Iterator;
import java.util.WeakHashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h implements androidx.core.view.r, LifecycleEventListener {

    /* renamed from: v, reason: collision with root package name */
    public static boolean f6761v;

    /* renamed from: w, reason: collision with root package name */
    public static boolean f6762w;

    /* renamed from: d, reason: collision with root package name */
    public static final h f6758d = new h();

    /* renamed from: e, reason: collision with root package name */
    public static final HashSet f6759e = new HashSet();

    /* renamed from: i, reason: collision with root package name */
    public static WeakReference f6760i = new WeakReference(null);

    /* renamed from: x, reason: collision with root package name */
    public static final boolean f6763x = true;

    @Override // androidx.core.view.r
    public final WindowInsetsCompat a(View v5, WindowInsetsCompat insets) {
        Intrinsics.checkNotNullParameter(v5, "v");
        Intrinsics.checkNotNullParameter(insets, "insets");
        WindowInsetsCompat k = f6763x ? s0.k(v5, insets) : insets;
        Intrinsics.checkNotNull(k);
        Iterator it = f6759e.iterator();
        while (it.hasNext()) {
            k = ((androidx.core.view.r) it.next()).a(v5, insets);
            Intrinsics.checkNotNullExpressionValue(k, "onApplyWindowInsets(...)");
        }
        return k;
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostDestroy() {
        View view = (View) f6760i.get();
        if (f6761v && view != null) {
            WeakHashMap weakHashMap = s0.a;
            androidx.core.view.j0.m(view, null);
            f6761v = false;
            f6760i.clear();
        }
        f6762w = false;
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostPause() {
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostResume() {
    }
}
