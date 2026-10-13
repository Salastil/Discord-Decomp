package com.discord.misc.utilities.activity;

import android.content.Intent;
import android.os.Bundle;
import com.facebook.react.devsupport.DevSupportManagerBase;
import com.facebook.react.devsupport.interfaces.ErrorType;
import com.facebook.react.devsupport.interfaces.StackFrame;
import java.lang.ref.WeakReference;
import java.util.concurrent.CompletableFuture;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4276d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f4277e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4278i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f4279v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Cloneable f4280w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ Object f4281x;

    public /* synthetic */ a(Object obj, Object obj2, Cloneable cloneable, int i5, Object obj3, int i6) {
        this.f4276d = i6;
        this.f4278i = obj;
        this.f4279v = obj2;
        this.f4280w = cloneable;
        this.f4277e = i5;
        this.f4281x = obj3;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4276d) {
            case 0:
                ActivityUtilities.startActivityForResultAsyncWithFuture$lambda$1((WeakReference) this.f4278i, (CompletableFuture) this.f4279v, (Intent) this.f4280w, this.f4277e, (Bundle) this.f4281x);
                break;
            default:
                DevSupportManagerBase.showNewError$lambda$7((DevSupportManagerBase) this.f4278i, (String) this.f4279v, (StackFrame[]) this.f4280w, this.f4277e, (ErrorType) this.f4281x);
                break;
        }
    }
}
