package u3;

import android.app.NotificationChannelGroup;
import android.app.Person;
import android.content.pm.ShortcutManager;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Bundle;
import android.text.Layout;
import com.discord.image.fresco.config.FrescoMemoryCacheExperimentSettingsExtensionsKt;
import com.facebook.imagepipeline.request.ImageRequestBuilder;
import com.facebook.react.views.image.ReactImageRequestBuilderHook;
import com.google.firebase.installations.FirebaseInstallationsRegistrar;
import yc.o;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements ReactImageRequestBuilderHook.Hook, hc.f, id.g, ei.e, ni.e {
    public static /* bridge */ /* synthetic */ NotificationChannelGroup b(Object obj) {
        return (NotificationChannelGroup) obj;
    }

    public static /* bridge */ /* synthetic */ Person c(Object obj) {
        return (Person) obj;
    }

    public static /* bridge */ /* synthetic */ ShortcutManager d(Object obj) {
        return (ShortcutManager) obj;
    }

    public static /* bridge */ /* synthetic */ Class e() {
        return ShortcutManager.class;
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x005d  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x006d  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x007c  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x008c  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00a9  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x00b8  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00c7  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00dc  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x00e5  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x00f6  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x00fd  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x00ec  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x00cf  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x00af  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x0082  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x0073  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0063  */
    @Override // hc.f
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public hc.g a(Bundle bundle) {
        float f2;
        int i5;
        String str;
        float f10;
        int i6;
        String str2;
        int i10;
        boolean z5;
        CharSequence charSequence = bundle.getCharSequence(wd.b.P);
        CharSequence charSequence2 = charSequence != null ? charSequence : null;
        Layout.Alignment alignment = (Layout.Alignment) bundle.getSerializable(wd.b.Q);
        Layout.Alignment alignment2 = alignment != null ? alignment : null;
        Layout.Alignment alignment3 = (Layout.Alignment) bundle.getSerializable(wd.b.R);
        Layout.Alignment alignment4 = alignment3 != null ? alignment3 : null;
        Bitmap bitmap = (Bitmap) bundle.getParcelable(wd.b.S);
        Bitmap bitmap2 = bitmap != null ? bitmap : null;
        String str3 = wd.b.T;
        if (bundle.containsKey(str3)) {
            String str4 = wd.b.U;
            if (bundle.containsKey(str4)) {
                f2 = bundle.getFloat(str3);
                i5 = bundle.getInt(str4);
                String str5 = wd.b.V;
                int i11 = !bundle.containsKey(str5) ? bundle.getInt(str5) : Integer.MIN_VALUE;
                String str6 = wd.b.W;
                float f11 = !bundle.containsKey(str6) ? bundle.getFloat(str6) : -3.4028235E38f;
                String str7 = wd.b.X;
                int i12 = !bundle.containsKey(str7) ? bundle.getInt(str7) : Integer.MIN_VALUE;
                str = wd.b.Z;
                if (bundle.containsKey(str)) {
                    String str8 = wd.b.Y;
                    if (bundle.containsKey(str8)) {
                        float f12 = bundle.getFloat(str);
                        i6 = bundle.getInt(str8);
                        f10 = f12;
                        String str9 = wd.b.a0;
                        float f13 = bundle.containsKey(str9) ? bundle.getFloat(str9) : -3.4028235E38f;
                        String str10 = wd.b.f19796b0;
                        float f14 = bundle.containsKey(str10) ? bundle.getFloat(str10) : -3.4028235E38f;
                        str2 = wd.b.f19797c0;
                        if (bundle.containsKey(str2)) {
                            i10 = bundle.getInt(str2);
                            z5 = true;
                        } else {
                            i10 = -16777216;
                            z5 = false;
                        }
                        int i13 = i10;
                        boolean z6 = bundle.getBoolean(wd.b.f19798d0, false) ? z5 : false;
                        String str11 = wd.b.f19799e0;
                        int i14 = bundle.containsKey(str11) ? bundle.getInt(str11) : Integer.MIN_VALUE;
                        String str12 = wd.b.f19800f0;
                        return new wd.b(charSequence2, alignment2, alignment4, bitmap2, f2, i5, i11, f11, i12, i6, f10, f13, f14, z6, i13, i14, bundle.containsKey(str12) ? bundle.getFloat(str12) : 0.0f);
                    }
                }
                f10 = -3.4028235E38f;
                i6 = Integer.MIN_VALUE;
                String str92 = wd.b.a0;
                if (bundle.containsKey(str92)) {
                }
                String str102 = wd.b.f19796b0;
                float f142 = bundle.containsKey(str102) ? bundle.getFloat(str102) : -3.4028235E38f;
                str2 = wd.b.f19797c0;
                if (bundle.containsKey(str2)) {
                }
                int i132 = i10;
                if (bundle.getBoolean(wd.b.f19798d0, false)) {
                }
                String str112 = wd.b.f19799e0;
                if (bundle.containsKey(str112)) {
                }
                String str122 = wd.b.f19800f0;
                return new wd.b(charSequence2, alignment2, alignment4, bitmap2, f2, i5, i11, f11, i12, i6, f10, f13, f142, z6, i132, i14, bundle.containsKey(str122) ? bundle.getFloat(str122) : 0.0f);
            }
        }
        f2 = -3.4028235E38f;
        i5 = Integer.MIN_VALUE;
        String str52 = wd.b.V;
        if (!bundle.containsKey(str52)) {
        }
        String str62 = wd.b.W;
        if (!bundle.containsKey(str62)) {
        }
        String str72 = wd.b.X;
        if (!bundle.containsKey(str72)) {
        }
        str = wd.b.Z;
        if (bundle.containsKey(str)) {
        }
        f10 = -3.4028235E38f;
        i6 = Integer.MIN_VALUE;
        String str922 = wd.b.a0;
        if (bundle.containsKey(str922)) {
        }
        String str1022 = wd.b.f19796b0;
        float f1422 = bundle.containsKey(str1022) ? bundle.getFloat(str1022) : -3.4028235E38f;
        str2 = wd.b.f19797c0;
        if (bundle.containsKey(str2)) {
        }
        int i1322 = i10;
        if (bundle.getBoolean(wd.b.f19798d0, false)) {
        }
        String str1122 = wd.b.f19799e0;
        if (bundle.containsKey(str1122)) {
        }
        String str1222 = wd.b.f19800f0;
        return new wd.b(charSequence2, alignment2, alignment4, bitmap2, f2, i5, i11, f11, i12, i6, f10, f13, f1422, z6, i1322, i14, bundle.containsKey(str1222) ? bundle.getFloat(str1222) : 0.0f);
    }

    @Override // ei.e
    public Object apply(Object obj) {
        return (o) obj;
    }

    @Override // id.g
    public boolean f(int i5, int i6, int i10, int i11, int i12) {
        if (i6 == 67 && i10 == 79 && i11 == 77 && (i12 == 77 || i5 == 2)) {
            return true;
        }
        if (i6 == 77 && i10 == 76 && i11 == 76) {
            return i12 == 84 || i5 == 2;
        }
        return false;
    }

    @Override // ni.e
    public Object g(am.f fVar) {
        zi.d lambda$getComponents$0;
        lambda$getComponents$0 = FirebaseInstallationsRegistrar.lambda$getComponents$0(fVar);
        return lambda$getComponents$0;
    }

    @Override // com.facebook.react.views.image.ReactImageRequestBuilderHook.Hook
    public void apply(Uri uri, ImageRequestBuilder imageRequestBuilder) {
        FrescoMemoryCacheExperimentSettingsExtensionsKt.configureReactImageRequestBuilderHook$lambda$0(uri, imageRequestBuilder);
    }
}
