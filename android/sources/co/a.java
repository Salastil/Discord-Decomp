package co;

import android.content.ContentResolver;
import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.os.ParcelFileDescriptor;
import android.provider.DocumentsContract;
import app.rive.runtime.kotlin.core.AudioAsset;
import app.rive.runtime.kotlin.core.FileAsset;
import app.rive.runtime.kotlin.core.FontAsset;
import app.rive.runtime.kotlin.core.ImageAsset;
import app.rive.runtime.kotlin.core.RiveAudio;
import app.rive.runtime.kotlin.core.RiveFont;
import app.rive.runtime.kotlin.core.RiveRenderImage;
import com.margelo.nitro.rive.w1;
import com.reactnativecommunity.clipboard.ClipboardModule;
import fo.n;
import fo.q;
import id.zelory.compressor.constraint.Compression;
import java.io.File;
import java.io.FileOutputStream;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Iterator;
import java.util.Locale;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlinx.coroutines.CoroutineScope;
import lo.h;
import nr.o;
import pl.e;
import pl.f;

/* loaded from: classes3.dex */
public final class a extends h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3590d = 2;

    /* renamed from: e, reason: collision with root package name */
    public Object f3591e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3592i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f3593v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f3594w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(Context context, Uri uri, f fVar, e eVar, Continuation continuation) {
        super(2, continuation);
        this.f3593v = context;
        this.f3594w = uri;
        this.f3591e = fVar;
        this.f3592i = eVar;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation completion) {
        switch (this.f3590d) {
            case 0:
                Intrinsics.checkParameterIsNotNull(completion, "completion");
                a aVar = new a((Function1) this.f3592i, (Context) this.f3593v, (Uri) this.f3594w, completion);
                aVar.f3591e = (CoroutineScope) obj;
                return aVar;
            case 1:
                return new a((w1) this.f3591e, (byte[]) this.f3592i, (FileAsset) this.f3593v, (o) this.f3594w, completion);
            default:
                return new a((Context) this.f3593v, (Uri) this.f3594w, (f) this.f3591e, (e) this.f3592i, completion);
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        switch (this.f3590d) {
        }
        return ((a) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Object i5;
        Object i6;
        String str;
        String type;
        String str2;
        Cursor query;
        int i10 = this.f3590d;
        Object obj2 = this.f3592i;
        Object obj3 = this.f3594w;
        Object obj4 = this.f3593v;
        switch (i10) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                ki.b.R(obj);
                Compression compression = new Compression();
                ((Function1) obj2).invoke(compression);
                Context context = (Context) obj4;
                Uri uri = (Uri) obj3;
                String str3 = c.a;
                Intrinsics.checkParameterIsNotNull(context, "context");
                Intrinsics.checkParameterIsNotNull(uri, "srcFileUri");
                StringBuilder sb2 = new StringBuilder();
                StringBuilder sb3 = new StringBuilder();
                File cacheDir = context.getCacheDir();
                Intrinsics.checkExpressionValueIsNotNull(cacheDir, "context.cacheDir");
                sb3.append(cacheDir.getPath());
                String str4 = c.a;
                sb3.append(str4);
                sb3.append("compressor");
                sb3.append(str4);
                sb2.append(sb3.toString());
                Intrinsics.checkParameterIsNotNull(context, "context");
                Intrinsics.checkParameterIsNotNull(uri, "uri");
                ContentResolver contentResolver = context.getContentResolver();
                try {
                    q qVar = Result.f13476e;
                    query = contentResolver.query(uri, new String[]{"_display_name"}, null, null, null);
                    if (query == null) {
                        Intrinsics.throwNpe();
                    }
                } catch (Throwable th2) {
                    q qVar2 = Result.f13476e;
                    i5 = ki.b.i(th2);
                }
                try {
                    if (!query.moveToFirst()) {
                        throw new IllegalStateException("Cursor is empty");
                    }
                    String it = query.getString(query.getColumnIndex("_display_name"));
                    Intrinsics.checkExpressionValueIsNotNull(it, "it");
                    i5 = StringsKt.K(it) ? null : it;
                    if (i5 == null) {
                        Intrinsics.throwNpe();
                    }
                    query.close();
                    if (Result.a(i5) != null) {
                        try {
                            str = "IMG_" + new SimpleDateFormat("yyyyMMdd_", Locale.getDefault()).format(new Date()) + System.nanoTime();
                            type = contentResolver.getType(uri);
                        } catch (Throwable th3) {
                            q qVar3 = Result.f13476e;
                            i6 = ki.b.i(th3);
                        }
                        if (!Intrinsics.areEqual(type, ClipboardModule.MIMETYPE_JPG) && !Intrinsics.areEqual(type, ClipboardModule.MIMETYPE_JPEG)) {
                            if (Intrinsics.areEqual(type, ClipboardModule.MIMETYPE_PNG)) {
                                str2 = "png";
                            } else {
                                if (!Intrinsics.areEqual(type, ClipboardModule.MIMETYPE_WEBP)) {
                                    throw new IllegalArgumentException("Cannot generate fallback filename for " + type + ' ' + uri);
                                }
                                str2 = "webp";
                            }
                            i6 = str + '.' + str2;
                            i5 = i6;
                        }
                        str2 = "jpg";
                        i6 = str + '.' + str2;
                        i5 = i6;
                    }
                    ki.b.R(i5);
                    sb2.append((String) i5);
                    File file = new File(sb2.toString());
                    File parentFile = file.getParentFile();
                    if (parentFile != null) {
                        parentFile.mkdirs();
                    }
                    if (file.exists()) {
                        file.delete();
                    }
                    file.createNewFile();
                    file.deleteOnExit();
                    ParcelFileDescriptor.AutoCloseInputStream autoCloseInputStream = new ParcelFileDescriptor.AutoCloseInputStream(context.getContentResolver().openFileDescriptor(uri, "r"));
                    FileOutputStream fileOutputStream = new FileOutputStream(file);
                    try {
                        try {
                            com.facebook.imagepipeline.nativecode.b.h(autoCloseInputStream, fileOutputStream, 8192);
                            fileOutputStream.close();
                            autoCloseInputStream.close();
                            Iterator it2 = compression.a.iterator();
                            while (it2.hasNext()) {
                                eo.a aVar2 = (eo.a) it2.next();
                                while (!aVar2.isSatisfied(file)) {
                                    file = aVar2.satisfy(file);
                                }
                            }
                            return file;
                        } finally {
                        }
                    } finally {
                    }
                } finally {
                }
            case 1:
                ko.a aVar3 = ko.a.f13464d;
                ki.b.R(obj);
                byte[] bArr = (byte[]) obj2;
                FileAsset fileAsset = (FileAsset) obj4;
                if (fileAsset instanceof ImageAsset) {
                    ((ImageAsset) fileAsset).setImage(RiveRenderImage.Companion.fromEncoded$default(RiveRenderImage.INSTANCE, bArr, null, 2, null));
                } else if (fileAsset instanceof FontAsset) {
                    ((FontAsset) fileAsset).setFont(RiveFont.Companion.make$default(RiveFont.INSTANCE, bArr, null, 2, null));
                } else {
                    if (!(fileAsset instanceof AudioAsset)) {
                        throw new n();
                    }
                    ((AudioAsset) fileAsset).setAudio(RiveAudio.Companion.make$default(RiveAudio.INSTANCE, bArr, null, 2, null));
                }
                return Boolean.valueOf(((o) obj3).S(Unit.a));
            default:
                ko.a aVar4 = ko.a.f13464d;
                ki.b.R(obj);
                Context context2 = (Context) obj4;
                ContentResolver contentResolver2 = context2.getContentResolver();
                Uri bookmark = (Uri) obj3;
                pl.b bVar = new pl.b(bookmark);
                bVar.f16432d = contentResolver2.getType(bookmark);
                f fVar = (f) this.f3591e;
                if (fVar.f16451g) {
                    bVar.f16434f = contentResolver2.getStreamTypes(bookmark, "*/*");
                }
                if (fVar.f16450f) {
                    try {
                        context2.getContentResolver().takePersistableUriPermission(bookmark, 3);
                        Intrinsics.checkNotNullParameter(bookmark, "bookmark");
                        bVar.f16435g = bookmark.toString();
                    } catch (Exception e9) {
                        String localizedMessage = e9.getLocalizedMessage();
                        if (localizedMessage == null && (localizedMessage = e9.getMessage()) == null) {
                            localizedMessage = "Unknown error with takePersistableUriPermission";
                        }
                        bVar.f16436h = localizedMessage;
                    }
                }
                boolean z5 = fVar.f16451g && DocumentsContract.isDocumentUri(context2, bookmark);
                Intrinsics.checkNotNull(contentResolver2);
                e.b(contentResolver2, bVar, z5);
                return bVar;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(w1 w1Var, byte[] bArr, FileAsset fileAsset, o oVar, Continuation continuation) {
        super(2, continuation);
        this.f3591e = w1Var;
        this.f3592i = bArr;
        this.f3593v = fileAsset;
        this.f3594w = oVar;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(Function1 function1, Context context, Uri uri, Continuation continuation) {
        super(2, continuation);
        this.f3592i = function1;
        this.f3593v = context;
        this.f3594w = uri;
    }
}
