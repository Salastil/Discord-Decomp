package com.discord.media.engine;

import android.graphics.Bitmap;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlinx.coroutines.CoroutineScope;

/* loaded from: classes.dex */
public final /* synthetic */ class v implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4237d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4238e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4239i;

    public /* synthetic */ v(int i5, Object obj, Object obj2) {
        this.f4237d = i5;
        this.f4238e = obj;
        this.f4239i = obj2;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit invokeSuspend$lambda$0;
        Unit broadcastThumbnailParams$lambda$64$lambda$63;
        switch (this.f4237d) {
            case 0:
                invokeSuspend$lambda$0 = MediaEngineModule$setBroadcastThumbnailParams$1.invokeSuspend$lambda$0((CoroutineScope) this.f4238e, (MediaEngineModule) this.f4239i, (String) obj);
                return invokeSuspend$lambda$0;
            default:
                broadcastThumbnailParams$lambda$64$lambda$63 = MediaEngine.setBroadcastThumbnailParams$lambda$64$lambda$63((MediaEngine) this.f4238e, (Function1) this.f4239i, (Bitmap) obj);
                return broadcastThumbnailParams$lambda$64$lambda$63;
        }
    }
}
