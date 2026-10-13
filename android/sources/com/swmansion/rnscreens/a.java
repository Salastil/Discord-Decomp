package com.swmansion.rnscreens;

import androidx.activity.OnBackPressedCallback;

/* loaded from: classes3.dex */
public final class a extends OnBackPressedCallback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ b f6719d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(b bVar) {
        super(true);
        this.f6719d = bVar;
    }

    @Override // androidx.activity.OnBackPressedCallback
    public final void handleOnBackPressed() {
        this.f6719d.setIconified(true);
    }
}
