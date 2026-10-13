package com.facebook.react.modules.core;

import android.content.Context;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.view.Choreographer;
import androidx.profileinstaller.ProfileInstallerInitializer;
import i.j;
import in.d;
import java.util.Random;
import km.c;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Choreographer.FrameCallback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4973d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4974e;

    public /* synthetic */ b(int i5, Object obj) {
        this.f4973d = i5;
        this.f4974e = obj;
    }

    @Override // android.view.Choreographer.FrameCallback
    public final void doFrame(long j) {
        switch (this.f4973d) {
            case 0:
                ReactChoreographer.frameCallback$lambda$1((ReactChoreographer) this.f4974e, j);
                break;
            case 1:
                d dVar = (d) this.f4974e;
                dVar.f10971d = false;
                dVar.f10969b.invoke();
                break;
            case 2:
                ((Runnable) this.f4974e).run();
                break;
            case 3:
                c cVar = (c) this.f4974e;
                cVar.f13418f0 = null;
                cVar.h0 = false;
                cVar.k();
                break;
            default:
                (Build.VERSION.SDK_INT >= 28 ? y2.d.a(Looper.getMainLooper()) : new Handler(Looper.getMainLooper())).postDelayed(new j((Context) this.f4974e, 1), new Random().nextInt(Math.max(1000, 1)) + 5000);
                break;
        }
    }

    public /* synthetic */ b(ProfileInstallerInitializer profileInstallerInitializer, Context context) {
        this.f4973d = 4;
        this.f4974e = context;
    }
}
