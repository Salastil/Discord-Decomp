package androidx.core.app;

import android.os.Bundle;
import java.util.HashSet;

/* loaded from: classes.dex */
public final class RemoteInput {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final CharSequence f1491b;

    /* renamed from: c, reason: collision with root package name */
    public final CharSequence[] f1492c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f1493d;

    /* renamed from: e, reason: collision with root package name */
    public final int f1494e;

    /* renamed from: f, reason: collision with root package name */
    public final Bundle f1495f;

    /* renamed from: g, reason: collision with root package name */
    public final HashSet f1496g;

    public RemoteInput(String str, CharSequence charSequence, CharSequence[] charSequenceArr, boolean z5, int i5, Bundle bundle, HashSet hashSet) {
        this.a = str;
        this.f1491b = charSequence;
        this.f1492c = charSequenceArr;
        this.f1493d = z5;
        this.f1494e = i5;
        this.f1495f = bundle;
        this.f1496g = hashSet;
        if (i5 == 2 && !z5) {
            throw new IllegalArgumentException("setEditChoicesBeforeSending requires setAllowFreeFormInput");
        }
    }
}
