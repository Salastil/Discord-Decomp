package com.discord.permissions;

import android.graphics.Bitmap;
import android.media.MediaMetadataRetriever;
import android.net.Uri;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.WritableNativeMap;
import java.io.File;
import jl.e;
import jl.f;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Callback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4333d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4334e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4335i;

    public /* synthetic */ c(int i5, Object obj, Object obj2) {
        this.f4333d = i5;
        this.f4334e = obj;
        this.f4335i = obj2;
    }

    @Override // com.facebook.react.bridge.Callback
    public final void invoke(Object[] objArr) {
        Long l6;
        switch (this.f4333d) {
            case 0:
                NativePermissionPromise.generate$lambda$0((Function0) this.f4334e, (Function0) this.f4335i, objArr);
                break;
            default:
                e eVar = (e) this.f4334e;
                String str = (String) this.f4335i;
                f fVar = eVar.f12835c0;
                String str2 = (String) objArr[0];
                try {
                    Bitmap v5 = eVar.v(Uri.fromFile(new File(str2)));
                    long lastModified = new File(str2).lastModified();
                    try {
                        MediaMetadataRetriever mediaMetadataRetriever = new MediaMetadataRetriever();
                        mediaMetadataRetriever.setDataSource(str2);
                        l6 = Long.valueOf(Long.parseLong(mediaMetadataRetriever.extractMetadata(9)));
                    } catch (Exception unused) {
                        l6 = -1L;
                    }
                    long longValue = l6.longValue();
                    WritableNativeMap writableNativeMap = new WritableNativeMap();
                    writableNativeMap.putInt("width", v5.getWidth());
                    writableNativeMap.putInt("height", v5.getHeight());
                    writableNativeMap.putString("mime", str);
                    writableNativeMap.putInt("size", (int) new File(str2).length());
                    writableNativeMap.putInt("duration", (int) longValue);
                    writableNativeMap.putString("path", "file://" + str2);
                    writableNativeMap.putString("modificationDate", String.valueOf(lastModified));
                    fVar.d(writableNativeMap);
                    break;
                } catch (Exception e9) {
                    fVar.b("E_NO_IMAGE_DATA_FOUND", e9);
                }
        }
    }
}
