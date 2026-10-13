package app.rive.runtime.kotlin;

import c5.p;
import com.discord.notifications.service.utils.FCMTokenHelper;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements p, OnCompleteListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Function1 f2609d;

    public /* synthetic */ a(Function1 function1) {
        this.f2609d = function1;
    }

    @Override // com.google.android.gms.tasks.OnCompleteListener
    public void onComplete(Task task) {
        FCMTokenHelper.getToken$lambda$1(this.f2609d, task);
    }
}
