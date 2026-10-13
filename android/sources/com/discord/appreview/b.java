package com.discord.appreview;

import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements jg.b, OnCompleteListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ AppRatingRequester f3760d;

    public /* synthetic */ b(AppRatingRequester appRatingRequester) {
        this.f3760d = appRatingRequester;
    }

    @Override // jg.b
    public void E() {
        AppRatingRequester.executeRequest$lambda$2(this.f3760d);
    }

    @Override // com.google.android.gms.tasks.OnCompleteListener
    public void onComplete(Task task) {
        AppRatingRequester.executeRequest$lambda$1$lambda$0(this.f3760d, task);
    }
}
