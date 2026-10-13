package com.facebook.react.devsupport;

import android.view.View;

/* loaded from: classes3.dex */
public final /* synthetic */ class s implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4940d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ RedBoxContentView f4941e;

    public /* synthetic */ s(RedBoxContentView redBoxContentView, int i5) {
        this.f4940d = i5;
        this.f4941e = redBoxContentView;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f4940d) {
            case 0:
                RedBoxContentView.reportButtonOnClickListener$lambda$0(this.f4941e, view);
                break;
            case 1:
                RedBoxContentView.init$lambda$2(this.f4941e, view);
                break;
            default:
                RedBoxContentView.init$lambda$3(this.f4941e, view);
                break;
        }
    }
}
