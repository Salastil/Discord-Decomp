package jl;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import androidx.core.content.FileProvider;
import androidx.fragment.app.w0;
import f.i;
import java.io.File;
import java.util.concurrent.Callable;
import kotlin.jvm.internal.Intrinsics;
import org.webrtc.MediaStreamTrack;

/* loaded from: classes3.dex */
public final class c implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12825d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Activity f12826e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ e f12827i;

    public /* synthetic */ c(e eVar, Activity activity, int i5) {
        this.f12825d = i5;
        this.f12827i = eVar;
        this.f12826e = activity;
    }

    @Override // java.util.concurrent.Callable
    public final Object call() {
        String str;
        File d6;
        g.f mediaType;
        Intent d7;
        int i5;
        switch (this.f12825d) {
            case 0:
                Activity activity = this.f12826e;
                e eVar = this.f12827i;
                f fVar = eVar.f12835c0;
                try {
                    if (eVar.f12836d.equals(MediaStreamTrack.VIDEO_TRACK_KIND)) {
                        str = "android.media.action.VIDEO_CAPTURE";
                        d6 = eVar.e();
                    } else {
                        str = "android.media.action.IMAGE_CAPTURE";
                        d6 = eVar.d();
                    }
                    Intent intent = new Intent(str);
                    Uri uriForFile = FileProvider.getUriForFile(activity, activity.getApplicationContext().getPackageName() + ".provider", d6);
                    eVar.a0 = uriForFile;
                    intent.putExtra("output", uriForFile);
                    if (eVar.J) {
                        intent.putExtra("android.intent.extras.CAMERA_FACING", 1);
                        intent.putExtra("android.intent.extras.LENS_FACING_FRONT", 1);
                        intent.putExtra("android.intent.extra.USE_FRONT_CAMERA", true);
                    }
                    if (intent.resolveActivity(activity.getPackageManager()) != null) {
                        activity.startActivityForResult(intent, 61111);
                        break;
                    } else {
                        fVar.c("E_CANNOT_LAUNCH_CAMERA", "Cannot launch camera");
                        break;
                    }
                } catch (Exception e9) {
                    fVar.b("E_FAILED_TO_OPEN_CAMERA", e9);
                    return null;
                }
            default:
                e eVar2 = this.f12827i;
                eVar2.getClass();
                try {
                    int a = e.e.a();
                    boolean equals = eVar2.f12836d.equals(MediaStreamTrack.VIDEO_TRACK_KIND);
                    g.c mediaType2 = g.c.a;
                    if (equals) {
                        mediaType = g.e.a;
                        Intrinsics.checkNotNullParameter(mediaType, "mediaType");
                    } else {
                        if (!eVar2.f12836d.equals("photo") && !eVar2.f12842w) {
                            Intrinsics.checkNotNullParameter(mediaType2, "mediaType");
                            mediaType = mediaType2;
                        }
                        mediaType = g.d.a;
                        Intrinsics.checkNotNullParameter(mediaType, "mediaType");
                    }
                    boolean z5 = eVar2.f12838e;
                    g.b bVar = g.b.a;
                    Activity activity2 = this.f12826e;
                    if (!z5 || (i5 = eVar2.Z) <= 1) {
                        w0 w0Var = new w0(1);
                        i iVar = new i();
                        iVar.a = mediaType2;
                        iVar.f8302b = e.e.a();
                        iVar.f8303c = bVar;
                        Intrinsics.checkNotNullParameter(mediaType, "<set-?>");
                        iVar.a = mediaType;
                        iVar.f8302b = a;
                        Intrinsics.checkNotNullParameter(bVar, "<set-?>");
                        iVar.f8303c = bVar;
                        d7 = w0Var.d(activity2, iVar);
                    } else {
                        g.a aVar = new g.a(i5);
                        i iVar2 = new i();
                        iVar2.a = mediaType2;
                        iVar2.f8302b = e.e.a();
                        iVar2.f8303c = bVar;
                        Intrinsics.checkNotNullParameter(mediaType, "<set-?>");
                        iVar2.a = mediaType;
                        iVar2.f8302b = a;
                        Intrinsics.checkNotNullParameter(bVar, "<set-?>");
                        iVar2.f8303c = bVar;
                        d7 = aVar.a(activity2, iVar2);
                    }
                    activity2.startActivityForResult(d7, 61110);
                    break;
                } catch (Exception e10) {
                    eVar2.f12835c0.b("E_FAILED_TO_SHOW_PICKER", e10);
                    return null;
                }
                break;
        }
        return null;
    }
}
