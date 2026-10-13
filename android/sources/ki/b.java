package ki;

import android.content.ContentResolver;
import android.content.ContentValues;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.PorterDuff;
import android.graphics.drawable.Icon;
import android.media.MediaMetadataRetriever;
import android.net.Uri;
import android.opengl.EGL14;
import android.opengl.EGLConfig;
import android.opengl.EGLContext;
import android.opengl.EGLDisplay;
import android.opengl.EGLSurface;
import android.opengl.GLES20;
import android.os.Build;
import android.provider.MediaStore;
import android.text.SpannableStringBuilder;
import android.util.Base64;
import android.util.Log;
import android.view.View;
import android.webkit.MimeTypeMap;
import androidx.core.graphics.drawable.IconCompat;
import c5.v;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.turbomodule.core.CallInvokerHolderImpl;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.reactnativecommunity.clipboard.ClipboardModule;
import e2.s;
import fo.r;
import ip.o0;
import j$.util.DesugarTimeZone;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.UnsupportedEncodingException;
import java.lang.reflect.InvocationTargetException;
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.text.ParseException;
import java.text.ParsePosition;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Calendar;
import java.util.Collection;
import java.util.Date;
import java.util.GregorianCalendar;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.TimeZone;
import java.util.UUID;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import ks.n;
import lp.r0;
import org.webrtc.MediaStreamTrack;
import rq.o;
import vp.d0;
import yq.y;
import ys.l;

/* loaded from: classes3.dex */
public abstract class b {
    public static e4.e a;

    public static String A(Context context, Uri uri) {
        return uri.getScheme().equals("file") ? MimeTypeMap.getSingleton().getMimeTypeFromExtension(MimeTypeMap.getFileExtensionFromUrl(uri.toString())) : context.getContentResolver().getType(uri);
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x0047, code lost:
    
        kotlin.jvm.internal.Intrinsics.checkNotNull(r0, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
        r0 = (ip.f) r0;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final d0 B(ip.f fVar) {
        ip.f fVar2;
        Intrinsics.checkNotNullParameter(fVar, "<this>");
        int i5 = oq.e.a;
        Intrinsics.checkNotNullParameter(fVar, "<this>");
        Iterator it = fVar.k().r0().b().iterator();
        while (true) {
            if (!it.hasNext()) {
                fVar2 = null;
                break;
            }
            y yVar = (y) it.next();
            if (!fp.i.y(yVar)) {
                ip.i a10 = yVar.r0().a();
                int i6 = kq.e.a;
                if (kq.e.n(a10, ip.g.f12138d) || kq.e.n(a10, ip.g.f12140i)) {
                    break;
                }
            }
        }
        if (fVar2 == null) {
            return null;
        }
        o H = fVar2.H();
        d0 d0Var = H instanceof d0 ? (d0) H : null;
        return d0Var == null ? B(fVar2) : d0Var;
    }

    public static int C(Object obj) {
        if (Build.VERSION.SDK_INT >= 28) {
            return androidx.core.view.h.g(obj);
        }
        try {
            return ((Integer) obj.getClass().getMethod("getResId", null).invoke(obj, null)).intValue();
        } catch (IllegalAccessException e9) {
            Log.e("IconCompat", "Unable to get icon resource", e9);
            return 0;
        } catch (NoSuchMethodException e10) {
            Log.e("IconCompat", "Unable to get icon resource", e10);
            return 0;
        } catch (InvocationTargetException e11) {
            Log.e("IconCompat", "Unable to get icon resource", e11);
            return 0;
        }
    }

    public static String D(Object obj) {
        if (Build.VERSION.SDK_INT >= 28) {
            return androidx.core.view.h.h(obj);
        }
        try {
            return (String) obj.getClass().getMethod("getResPackage", null).invoke(obj, null);
        } catch (IllegalAccessException e9) {
            Log.e("IconCompat", "Unable to get icon package", e9);
            return null;
        } catch (NoSuchMethodException e10) {
            Log.e("IconCompat", "Unable to get icon package", e10);
            return null;
        } catch (InvocationTargetException e11) {
            Log.e("IconCompat", "Unable to get icon package", e11);
            return null;
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(25:11|(4:13|(3:166|(2:168|(1:170))(1:171)|16)|15|16)(1:172)|(4:17|18|19|(3:20|21|22))|(3:23|24|25)|(3:26|27|(11:(12:(1:122)|(1:124)(1:150)|125|126|(8:144|(2:146|(1:148))(1:149)|129|130|(2:132|(1:134)(1:142))(1:143)|135|(1:140)|141)|128|129|130|(0)(0)|135|(2:137|140)|141)|151|126|(0)|128|129|130|(0)(0)|135|(0)|141))|34|(2:35|36)|(22:38|39|40|(18:42|43|44|45|46|(4:84|85|86|(1:94))|(1:49)|50|51|52|53|54|55|(7:63|64|65|(3:66|67|(2:69|70)(1:71))|72|73|74)|57|(1:59)|60|61)|110|43|44|45|46|(0)|(0)|50|51|52|53|54|55|(0)|57|(0)|60|61)|114|44|45|46|(0)|(0)|50|51|52|53|54|55|(0)|57|(0)|60|61) */
    /* JADX WARN: Can't wrap try/catch for region: R(32:11|(4:13|(3:166|(2:168|(1:170))(1:171)|16)|15|16)(1:172)|17|18|19|20|21|22|23|24|25|(3:26|27|(11:(12:(1:122)|(1:124)(1:150)|125|126|(8:144|(2:146|(1:148))(1:149)|129|130|(2:132|(1:134)(1:142))(1:143)|135|(1:140)|141)|128|129|130|(0)(0)|135|(2:137|140)|141)|151|126|(0)|128|129|130|(0)(0)|135|(0)|141))|34|(2:35|36)|(22:38|39|40|(18:42|43|44|45|46|(4:84|85|86|(1:94))|(1:49)|50|51|52|53|54|55|(7:63|64|65|(3:66|67|(2:69|70)(1:71))|72|73|74)|57|(1:59)|60|61)|110|43|44|45|46|(0)|(0)|50|51|52|53|54|55|(0)|57|(0)|60|61)|114|44|45|46|(0)|(0)|50|51|52|53|54|55|(0)|57|(0)|60|61) */
    /* JADX WARN: Code restructure failed: missing block: B:107:0x027a, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:109:0x0282, code lost:
    
        r0.printStackTrace();
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x02a6, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:83:0x02a7, code lost:
    
        r0.printStackTrace();
        r9 = 0.0d;
     */
    /* JADX WARN: Removed duplicated region for block: B:132:0x018d  */
    /* JADX WARN: Removed duplicated region for block: B:137:0x01aa A[Catch: Exception -> 0x01c5, TryCatch #14 {Exception -> 0x01c5, blocks: (B:27:0x00ef, B:122:0x010a, B:124:0x0113, B:125:0x011b, B:126:0x0124, B:129:0x0172, B:134:0x0193, B:135:0x019b, B:137:0x01aa, B:140:0x01b5, B:141:0x01c0, B:142:0x0196, B:143:0x0199, B:151:0x0120), top: B:26:0x00ef }] */
    /* JADX WARN: Removed duplicated region for block: B:143:0x0199 A[Catch: Exception -> 0x01c5, TryCatch #14 {Exception -> 0x01c5, blocks: (B:27:0x00ef, B:122:0x010a, B:124:0x0113, B:125:0x011b, B:126:0x0124, B:129:0x0172, B:134:0x0193, B:135:0x019b, B:137:0x01aa, B:140:0x01b5, B:141:0x01c0, B:142:0x0196, B:143:0x0199, B:151:0x0120), top: B:26:0x00ef }] */
    /* JADX WARN: Removed duplicated region for block: B:144:0x0160  */
    /* JADX WARN: Removed duplicated region for block: B:189:0x03cf  */
    /* JADX WARN: Removed duplicated region for block: B:191:0x03e6  */
    /* JADX WARN: Removed duplicated region for block: B:193:0x03f3  */
    /* JADX WARN: Removed duplicated region for block: B:200:0x043d  */
    /* JADX WARN: Removed duplicated region for block: B:209:0x04aa  */
    /* JADX WARN: Removed duplicated region for block: B:218:0x0448  */
    /* JADX WARN: Removed duplicated region for block: B:222:0x0438  */
    /* JADX WARN: Removed duplicated region for block: B:223:0x03ee  */
    /* JADX WARN: Removed duplicated region for block: B:224:0x03df  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x01f0  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x027e A[Catch: IOException -> 0x027a, TRY_LEAVE, TryCatch #1 {IOException -> 0x027a, blocks: (B:46:0x0249, B:49:0x027e, B:100:0x0279, B:106:0x0276, B:85:0x0253, B:99:0x0271), top: B:45:0x0249, inners: #9, #10 }] */
    /* JADX WARN: Removed duplicated region for block: B:59:0x032b  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x02eb A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:84:0x0253 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static WritableMap E(List list, UUID uuid, com.imagepicker.b bVar, Context context) {
        String str;
        WritableArray writableArray;
        boolean z5;
        Context context2;
        WritableArray writableArray2;
        String str2;
        Bitmap bitmap;
        String extractMetadata;
        Bitmap bitmap2;
        String extractMetadata2;
        String str3;
        MediaMetadataRetriever mediaMetadataRetriever;
        int i5;
        String str4;
        int i6;
        String str5;
        int i10;
        int i11;
        double d6;
        String str6;
        String str7;
        String str8;
        String str9;
        String str10;
        String str11;
        InputStream openInputStream;
        String b10;
        String str12;
        Date parse;
        SimpleDateFormat simpleDateFormat;
        int i12;
        int i13;
        int i14;
        int i15;
        int[] iArr;
        String mimeTypeFromExtension;
        String b11;
        String str13;
        File j;
        String str14;
        UUID uuid2 = uuid;
        com.imagepicker.b bVar2 = bVar;
        Context context3 = context;
        String str15 = "Orientation";
        String str16 = bVar2.f6494l;
        Boolean bool = bVar2.f6487c;
        boolean equals = str16.equals("photo");
        String str17 = bVar2.f6494l;
        boolean equals2 = str17.equals(MediaStreamTrack.VIDEO_TRACK_KIND);
        boolean equals3 = str17.equals("mixed");
        boolean equals4 = str17.equals("any");
        WritableArray createArray = Arguments.createArray();
        int i16 = 0;
        while (i16 < list.size()) {
            Uri uri = (Uri) list.get(i16);
            String A = A(context3, uri);
            int i17 = 0;
            Boolean bool2 = bool;
            boolean z6 = equals;
            boolean z7 = equals2;
            boolean z8 = equals3;
            boolean z10 = equals4;
            int i18 = i16;
            String str18 = null;
            WritableArray writableArray3 = createArray;
            if ((A != null ? A.contains("image/") : false) && (z6 || z8)) {
                if (uri.getScheme().contains("content")) {
                    str6 = "width";
                    ContentResolver contentResolver = context3.getContentResolver();
                    str7 = "type";
                    String type = contentResolver.getType(uri);
                    if (type != null) {
                        if (type.equals("image/gif")) {
                            str14 = "gif";
                        } else if (type.equals(ClipboardModule.MIMETYPE_PNG)) {
                            str14 = "png";
                        }
                        Uri fromFile = Uri.fromFile(j(context3, uuid2, str14));
                        f(uri, fromFile, contentResolver);
                        uri = fromFile;
                    }
                    str14 = "jpg";
                    Uri fromFile2 = Uri.fromFile(j(context3, uuid2, str14));
                    f(uri, fromFile2, contentResolver);
                    uri = fromFile2;
                } else {
                    str6 = "width";
                    str7 = "type";
                }
                try {
                    int[] x5 = x(context3, uri);
                    i12 = x5[0];
                    i13 = x5[1];
                    str9 = "fileName";
                    try {
                        i14 = bVar2.f6490f;
                        str8 = "fileSize";
                    } catch (Exception e9) {
                        e = e9;
                        str8 = "fileSize";
                    }
                } catch (Exception e10) {
                    e = e10;
                    str8 = "fileSize";
                    str9 = "fileName";
                }
                try {
                    i15 = bVar2.f6489e;
                    str10 = "r";
                } catch (Exception e11) {
                    e = e11;
                    str10 = "r";
                    e.printStackTrace();
                    String lastPathSegment = uri.getLastPathSegment();
                    b10 = new n2.h(context3.getContentResolver().openInputStream(uri)).b("DateTime");
                    if (b10 != null) {
                    }
                    str11 = null;
                    int[] x10 = x(context3, uri);
                    int i19 = x10[0];
                    int i20 = x10[1];
                    openInputStream = context3.getContentResolver().openInputStream(uri);
                    if (openInputStream != null) {
                    }
                    if (openInputStream != null) {
                    }
                    int[] iArr2 = {i19, i20};
                    WritableMap createMap = Arguments.createMap();
                    createMap.putString("uri", uri.toString());
                    double d7 = context3.getContentResolver().openFileDescriptor(uri, str10).getStatSize();
                    createMap.putDouble(str8, d7);
                    createMap.putString(str9, lastPathSegment);
                    String str19 = str7;
                    createMap.putString(str19, MimeTypeMap.getSingleton().getMimeTypeFromExtension(MimeTypeMap.getFileExtensionFromUrl(uri.toString())));
                    createMap.putInt(str6, iArr2[0]);
                    createMap.putInt("height", iArr2[1]);
                    createMap.putString(str19, A(context3, uri));
                    if (bVar.f6486b.booleanValue()) {
                    }
                    if (bool2.booleanValue()) {
                    }
                    writableArray2 = writableArray3;
                    writableArray2.pushMap(createMap);
                    context2 = context3;
                    str = str15;
                    i16 = i18 + 1;
                    context3 = context2;
                    createArray = writableArray2;
                    bool = bool2;
                    equals = z6;
                    equals2 = z7;
                    equals3 = z8;
                    equals4 = z10;
                    str15 = str;
                    uuid2 = uuid;
                    bVar2 = bVar;
                }
                try {
                    int i21 = bVar2.f6491g;
                    if (((i14 != 0 && i21 != 0) || i15 != 100) && (i14 < i12 || i21 < i13 || i15 != 100)) {
                        if (i14 != 0 && i21 != 0) {
                            if (i14 < i12) {
                                i13 = (int) ((i14 / i12) * i13);
                                i12 = i14;
                            }
                            if (i21 < i13) {
                                i12 = (int) ((i21 / i13) * i12);
                            } else {
                                i21 = i13;
                            }
                            iArr = new int[]{i12, i21};
                            InputStream openInputStream2 = context3.getContentResolver().openInputStream(uri);
                            mimeTypeFromExtension = MimeTypeMap.getSingleton().getMimeTypeFromExtension(MimeTypeMap.getFileExtensionFromUrl(uri.toString()));
                            Bitmap createScaledBitmap = Bitmap.createScaledBitmap(BitmapFactory.decodeStream(openInputStream2), iArr[0], iArr[1], true);
                            b11 = new n2.h(context3.getContentResolver().openInputStream(uri)).b(str15);
                            if (mimeTypeFromExtension != null) {
                                if (mimeTypeFromExtension.equals("image/gif")) {
                                    str13 = "gif";
                                } else if (mimeTypeFromExtension.equals(ClipboardModule.MIMETYPE_PNG)) {
                                    str13 = "png";
                                }
                                j = j(context3, uuid2, str13);
                                OutputStream openOutputStream = context3.getContentResolver().openOutputStream(Uri.fromFile(j));
                                mimeTypeFromExtension.getClass();
                                createScaledBitmap.compress(!mimeTypeFromExtension.equals(ClipboardModule.MIMETYPE_JPEG) ? !mimeTypeFromExtension.equals(ClipboardModule.MIMETYPE_PNG) ? Bitmap.CompressFormat.JPEG : Bitmap.CompressFormat.PNG : Bitmap.CompressFormat.JPEG, i15, openOutputStream);
                                if (!b11.equals(String.valueOf(1)) && !b11.equals(String.valueOf(0))) {
                                    n2.h hVar = new n2.h(j);
                                    hVar.F(str15, b11);
                                    hVar.B();
                                }
                                uri = Uri.fromFile(j);
                            }
                            str13 = "jpg";
                            j = j(context3, uuid2, str13);
                            OutputStream openOutputStream2 = context3.getContentResolver().openOutputStream(Uri.fromFile(j));
                            mimeTypeFromExtension.getClass();
                            createScaledBitmap.compress(!mimeTypeFromExtension.equals(ClipboardModule.MIMETYPE_JPEG) ? !mimeTypeFromExtension.equals(ClipboardModule.MIMETYPE_PNG) ? Bitmap.CompressFormat.JPEG : Bitmap.CompressFormat.PNG : Bitmap.CompressFormat.JPEG, i15, openOutputStream2);
                            if (!b11.equals(String.valueOf(1))) {
                                n2.h hVar2 = new n2.h(j);
                                hVar2.F(str15, b11);
                                hVar2.B();
                            }
                            uri = Uri.fromFile(j);
                        }
                        iArr = new int[]{i12, i13};
                        InputStream openInputStream22 = context3.getContentResolver().openInputStream(uri);
                        mimeTypeFromExtension = MimeTypeMap.getSingleton().getMimeTypeFromExtension(MimeTypeMap.getFileExtensionFromUrl(uri.toString()));
                        Bitmap createScaledBitmap2 = Bitmap.createScaledBitmap(BitmapFactory.decodeStream(openInputStream22), iArr[0], iArr[1], true);
                        b11 = new n2.h(context3.getContentResolver().openInputStream(uri)).b(str15);
                        if (mimeTypeFromExtension != null) {
                        }
                        str13 = "jpg";
                        j = j(context3, uuid2, str13);
                        OutputStream openOutputStream22 = context3.getContentResolver().openOutputStream(Uri.fromFile(j));
                        mimeTypeFromExtension.getClass();
                        createScaledBitmap2.compress(!mimeTypeFromExtension.equals(ClipboardModule.MIMETYPE_JPEG) ? !mimeTypeFromExtension.equals(ClipboardModule.MIMETYPE_PNG) ? Bitmap.CompressFormat.JPEG : Bitmap.CompressFormat.PNG : Bitmap.CompressFormat.JPEG, i15, openOutputStream22);
                        if (!b11.equals(String.valueOf(1))) {
                        }
                        uri = Uri.fromFile(j);
                    }
                } catch (Exception e12) {
                    e = e12;
                    e.printStackTrace();
                    String lastPathSegment2 = uri.getLastPathSegment();
                    b10 = new n2.h(context3.getContentResolver().openInputStream(uri)).b("DateTime");
                    if (b10 != null) {
                    }
                    str11 = null;
                    int[] x102 = x(context3, uri);
                    int i192 = x102[0];
                    int i202 = x102[1];
                    openInputStream = context3.getContentResolver().openInputStream(uri);
                    if (openInputStream != null) {
                    }
                    if (openInputStream != null) {
                    }
                    int[] iArr22 = {i192, i202};
                    WritableMap createMap2 = Arguments.createMap();
                    createMap2.putString("uri", uri.toString());
                    double d72 = context3.getContentResolver().openFileDescriptor(uri, str10).getStatSize();
                    createMap2.putDouble(str8, d72);
                    createMap2.putString(str9, lastPathSegment2);
                    String str192 = str7;
                    createMap2.putString(str192, MimeTypeMap.getSingleton().getMimeTypeFromExtension(MimeTypeMap.getFileExtensionFromUrl(uri.toString())));
                    createMap2.putInt(str6, iArr22[0]);
                    createMap2.putInt("height", iArr22[1]);
                    createMap2.putString(str192, A(context3, uri));
                    if (bVar.f6486b.booleanValue()) {
                    }
                    if (bool2.booleanValue()) {
                    }
                    writableArray2 = writableArray3;
                    writableArray2.pushMap(createMap2);
                    context2 = context3;
                    str = str15;
                    i16 = i18 + 1;
                    context3 = context2;
                    createArray = writableArray2;
                    bool = bool2;
                    equals = z6;
                    equals2 = z7;
                    equals3 = z8;
                    equals4 = z10;
                    str15 = str;
                    uuid2 = uuid;
                    bVar2 = bVar;
                }
                String lastPathSegment22 = uri.getLastPathSegment();
                try {
                    b10 = new n2.h(context3.getContentResolver().openInputStream(uri)).b("DateTime");
                } catch (Exception e13) {
                    Log.e("RNIP", "Could not load image metadata: " + e13.getMessage());
                }
                if (b10 != null) {
                    try {
                        Locale locale = Locale.US;
                        parse = new SimpleDateFormat("yyyy:MM:dd HH:mm:ss", locale).parse(b10);
                        simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ", locale);
                    } catch (Exception e14) {
                        Log.e("RNIP", "Could not parse image datetime to UTC: " + e14.getMessage());
                    }
                    if (parse != null) {
                        str12 = simpleDateFormat.format(parse);
                        str11 = str12;
                        int[] x1022 = x(context3, uri);
                        int i1922 = x1022[0];
                        int i2022 = x1022[1];
                        openInputStream = context3.getContentResolver().openInputStream(uri);
                        if (openInputStream != null) {
                            try {
                                int c6 = new n2.h(openInputStream).c();
                                if (c6 == 6 || c6 == 8 || c6 == 5 || c6 == 7) {
                                    i2022 = i1922;
                                    i1922 = i2022;
                                }
                            } finally {
                            }
                        }
                        if (openInputStream != null) {
                            openInputStream.close();
                        }
                        int[] iArr222 = {i1922, i2022};
                        WritableMap createMap22 = Arguments.createMap();
                        createMap22.putString("uri", uri.toString());
                        double d722 = context3.getContentResolver().openFileDescriptor(uri, str10).getStatSize();
                        createMap22.putDouble(str8, d722);
                        createMap22.putString(str9, lastPathSegment22);
                        String str1922 = str7;
                        createMap22.putString(str1922, MimeTypeMap.getSingleton().getMimeTypeFromExtension(MimeTypeMap.getFileExtensionFromUrl(uri.toString())));
                        createMap22.putInt(str6, iArr222[0]);
                        createMap22.putInt("height", iArr222[1]);
                        createMap22.putString(str1922, A(context3, uri));
                        if (bVar.f6486b.booleanValue()) {
                            try {
                                InputStream openInputStream3 = context3.getContentResolver().openInputStream(uri);
                                byte[] bArr = new byte[8192];
                                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                                while (true) {
                                    try {
                                        int read = openInputStream3.read(bArr);
                                        if (read == -1) {
                                            break;
                                        }
                                        byteArrayOutputStream.write(bArr, i17, read);
                                        i17 = 0;
                                    } catch (IOException e15) {
                                        e15.printStackTrace();
                                    }
                                }
                                str18 = Base64.encodeToString(byteArrayOutputStream.toByteArray(), 2);
                            } catch (FileNotFoundException e16) {
                                e16.printStackTrace();
                            }
                            createMap22.putString("base64", str18);
                        }
                        if (bool2.booleanValue()) {
                            createMap22.putString("timestamp", str11);
                            createMap22.putString(StackTraceHelper.ID_KEY, lastPathSegment22);
                        }
                        writableArray2 = writableArray3;
                        writableArray2.pushMap(createMap22);
                        context2 = context3;
                        str = str15;
                    }
                    str12 = null;
                    str11 = str12;
                    int[] x10222 = x(context3, uri);
                    int i19222 = x10222[0];
                    int i20222 = x10222[1];
                    openInputStream = context3.getContentResolver().openInputStream(uri);
                    if (openInputStream != null) {
                    }
                    if (openInputStream != null) {
                    }
                    int[] iArr2222 = {i19222, i20222};
                    WritableMap createMap222 = Arguments.createMap();
                    createMap222.putString("uri", uri.toString());
                    double d7222 = context3.getContentResolver().openFileDescriptor(uri, str10).getStatSize();
                    createMap222.putDouble(str8, d7222);
                    createMap222.putString(str9, lastPathSegment22);
                    String str19222 = str7;
                    createMap222.putString(str19222, MimeTypeMap.getSingleton().getMimeTypeFromExtension(MimeTypeMap.getFileExtensionFromUrl(uri.toString())));
                    createMap222.putInt(str6, iArr2222[0]);
                    createMap222.putInt("height", iArr2222[1]);
                    createMap222.putString(str19222, A(context3, uri));
                    if (bVar.f6486b.booleanValue()) {
                    }
                    if (bool2.booleanValue()) {
                    }
                    writableArray2 = writableArray3;
                    writableArray2.pushMap(createMap222);
                    context2 = context3;
                    str = str15;
                }
                str11 = null;
                int[] x102222 = x(context3, uri);
                int i192222 = x102222[0];
                int i202222 = x102222[1];
                openInputStream = context3.getContentResolver().openInputStream(uri);
                if (openInputStream != null) {
                }
                if (openInputStream != null) {
                }
                int[] iArr22222 = {i192222, i202222};
                WritableMap createMap2222 = Arguments.createMap();
                createMap2222.putString("uri", uri.toString());
                double d72222 = context3.getContentResolver().openFileDescriptor(uri, str10).getStatSize();
                createMap2222.putDouble(str8, d72222);
                createMap2222.putString(str9, lastPathSegment22);
                String str192222 = str7;
                createMap2222.putString(str192222, MimeTypeMap.getSingleton().getMimeTypeFromExtension(MimeTypeMap.getFileExtensionFromUrl(uri.toString())));
                createMap2222.putInt(str6, iArr22222[0]);
                createMap2222.putInt("height", iArr22222[1]);
                createMap2222.putString(str192222, A(context3, uri));
                if (bVar.f6486b.booleanValue()) {
                }
                if (bool2.booleanValue()) {
                }
                writableArray2 = writableArray3;
                writableArray2.pushMap(createMap2222);
                context2 = context3;
                str = str15;
            } else {
                str = str15;
                String A2 = A(context3, uri);
                if (A2 != null) {
                    writableArray = writableArray3;
                    z5 = A2.contains("video/");
                } else {
                    writableArray = writableArray3;
                    z5 = false;
                }
                if (z5 && (z7 || z8)) {
                    String o6 = jb.a.o(context3.getContentResolver(), uri);
                    WritableMap createMap3 = Arguments.createMap();
                    MediaMetadataRetriever mediaMetadataRetriever2 = new MediaMetadataRetriever();
                    mediaMetadataRetriever2.setDataSource(context3, uri);
                    try {
                        str2 = "height";
                        try {
                            mediaMetadataRetriever2.setDataSource(new FileInputStream(context3.getContentResolver().openFileDescriptor(uri, "r").getFileDescriptor()).getFD());
                            bitmap = mediaMetadataRetriever2.getFrameAtTime();
                        } catch (IOException e17) {
                            e = e17;
                            Log.e("RNIP", "Could not retrieve width and height from video: " + e.getMessage());
                            bitmap = null;
                            extractMetadata = mediaMetadataRetriever2.extractMetadata(9);
                            String extractMetadata3 = mediaMetadataRetriever2.extractMetadata(20);
                            bitmap2 = bitmap;
                            extractMetadata2 = mediaMetadataRetriever2.extractMetadata(5);
                            if (extractMetadata != null) {
                            }
                            if (str3 != null) {
                            }
                            if (extractMetadata2 != null) {
                            }
                            String str20 = str18;
                            if (bitmap2 != null) {
                            }
                            mediaMetadataRetriever.release();
                            createMap3.putString("uri", uri.toString());
                            d6 = context.getContentResolver().openFileDescriptor(uri, "r").getStatSize();
                            createMap3.putDouble("fileSize", d6);
                            createMap3.putInt("duration", i5);
                            createMap3.putInt("bitrate", i6);
                            createMap3.putString("fileName", o6);
                            context2 = context;
                            createMap3.putString(str5, A(context2, uri));
                            createMap3.putInt(str4, i10);
                            createMap3.putInt(str2, i11);
                            if (bool2.booleanValue()) {
                            }
                            writableArray2 = writableArray;
                            writableArray2.pushMap(createMap3);
                            i16 = i18 + 1;
                            context3 = context2;
                            createArray = writableArray2;
                            bool = bool2;
                            equals = z6;
                            equals2 = z7;
                            equals3 = z8;
                            equals4 = z10;
                            str15 = str;
                            uuid2 = uuid;
                            bVar2 = bVar;
                        } catch (RuntimeException e18) {
                            e = e18;
                            Log.e("RNIP", "Could not retrieve width and height from video: " + e.getMessage());
                            bitmap = null;
                            extractMetadata = mediaMetadataRetriever2.extractMetadata(9);
                            String extractMetadata32 = mediaMetadataRetriever2.extractMetadata(20);
                            bitmap2 = bitmap;
                            extractMetadata2 = mediaMetadataRetriever2.extractMetadata(5);
                            if (extractMetadata != null) {
                            }
                            if (str3 != null) {
                            }
                            if (extractMetadata2 != null) {
                            }
                            String str202 = str18;
                            if (bitmap2 != null) {
                            }
                            mediaMetadataRetriever.release();
                            createMap3.putString("uri", uri.toString());
                            d6 = context.getContentResolver().openFileDescriptor(uri, "r").getStatSize();
                            createMap3.putDouble("fileSize", d6);
                            createMap3.putInt("duration", i5);
                            createMap3.putInt("bitrate", i6);
                            createMap3.putString("fileName", o6);
                            context2 = context;
                            createMap3.putString(str5, A(context2, uri));
                            createMap3.putInt(str4, i10);
                            createMap3.putInt(str2, i11);
                            if (bool2.booleanValue()) {
                            }
                            writableArray2 = writableArray;
                            writableArray2.pushMap(createMap3);
                            i16 = i18 + 1;
                            context3 = context2;
                            createArray = writableArray2;
                            bool = bool2;
                            equals = z6;
                            equals2 = z7;
                            equals3 = z8;
                            equals4 = z10;
                            str15 = str;
                            uuid2 = uuid;
                            bVar2 = bVar;
                        }
                    } catch (IOException | RuntimeException e19) {
                        e = e19;
                        str2 = "height";
                    }
                    extractMetadata = mediaMetadataRetriever2.extractMetadata(9);
                    String extractMetadata322 = mediaMetadataRetriever2.extractMetadata(20);
                    bitmap2 = bitmap;
                    extractMetadata2 = mediaMetadataRetriever2.extractMetadata(5);
                    if (extractMetadata != null) {
                        str3 = extractMetadata322;
                        mediaMetadataRetriever = mediaMetadataRetriever2;
                        i5 = Math.round(Float.parseFloat(extractMetadata)) / 1000;
                    } else {
                        str3 = extractMetadata322;
                        mediaMetadataRetriever = mediaMetadataRetriever2;
                        i5 = 0;
                    }
                    if (str3 != null) {
                        int parseInt = Integer.parseInt(str3);
                        str4 = "width";
                        i6 = parseInt;
                    } else {
                        str4 = "width";
                        i6 = 0;
                    }
                    if (extractMetadata2 != null) {
                        str5 = "type";
                        String replace = extractMetadata2.substring(0, extractMetadata2.indexOf(".")).replace("T", " ");
                        try {
                            Locale locale2 = Locale.US;
                            Date parse2 = new SimpleDateFormat("yyyyMMdd HHmmss", locale2).parse(replace);
                            SimpleDateFormat simpleDateFormat2 = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ", locale2);
                            if (parse2 != null) {
                                str18 = simpleDateFormat2.format(parse2);
                            }
                        } catch (Exception e20) {
                            Log.e("RNIP", "Could not parse image datetime to UTC: " + e20.getMessage());
                        }
                    } else {
                        str5 = "type";
                    }
                    String str2022 = str18;
                    if (bitmap2 != null) {
                        int width = bitmap2.getWidth();
                        i11 = bitmap2.getHeight();
                        i10 = width;
                    } else {
                        i10 = 0;
                        i11 = 0;
                    }
                    try {
                        mediaMetadataRetriever.release();
                    } catch (IOException e21) {
                        Log.e("RNIP", "Could not release metadata retriever: " + e21.getMessage());
                    }
                    createMap3.putString("uri", uri.toString());
                    try {
                        d6 = context.getContentResolver().openFileDescriptor(uri, "r").getStatSize();
                    } catch (Exception e22) {
                        e22.printStackTrace();
                        d6 = 0.0d;
                    }
                    createMap3.putDouble("fileSize", d6);
                    createMap3.putInt("duration", i5);
                    createMap3.putInt("bitrate", i6);
                    createMap3.putString("fileName", o6);
                    context2 = context;
                    createMap3.putString(str5, A(context2, uri));
                    createMap3.putInt(str4, i10);
                    createMap3.putInt(str2, i11);
                    if (bool2.booleanValue()) {
                        createMap3.putString("timestamp", str2022);
                        createMap3.putString(StackTraceHelper.ID_KEY, o6);
                    }
                    writableArray2 = writableArray;
                    writableArray2.pushMap(createMap3);
                } else {
                    context2 = context3;
                    writableArray2 = writableArray;
                    if (!z10) {
                        throw new RuntimeException("Unsupported file type");
                    }
                    String o7 = jb.a.o(context2.getContentResolver(), uri);
                    WritableMap createMap4 = Arguments.createMap();
                    createMap4.putString("uri", uri.toString());
                    createMap4.putString("fileName", o7);
                    createMap4.putString("mimeType", A(context2, uri));
                    writableArray2.pushMap(createMap4);
                }
            }
            i16 = i18 + 1;
            context3 = context2;
            createArray = writableArray2;
            bool = bool2;
            equals = z6;
            equals2 = z7;
            equals3 = z8;
            equals4 = z10;
            str15 = str;
            uuid2 = uuid;
            bVar2 = bVar;
        }
        WritableMap createMap5 = Arguments.createMap();
        createMap5.putArray("assets", createArray);
        return createMap5;
    }

    public static String F(Date date) {
        TimeZone timeZone = io.sentry.vendor.gson.internal.bind.util.a.a;
        GregorianCalendar gregorianCalendar = new GregorianCalendar(timeZone, Locale.US);
        gregorianCalendar.setTime(date);
        StringBuilder sb2 = new StringBuilder(23 + (timeZone.getRawOffset() == 0 ? 1 : 6));
        io.sentry.vendor.gson.internal.bind.util.a.b(gregorianCalendar.get(1), 4, sb2);
        sb2.append('-');
        io.sentry.vendor.gson.internal.bind.util.a.b(gregorianCalendar.get(2) + 1, 2, sb2);
        sb2.append('-');
        io.sentry.vendor.gson.internal.bind.util.a.b(gregorianCalendar.get(5), 2, sb2);
        sb2.append('T');
        io.sentry.vendor.gson.internal.bind.util.a.b(gregorianCalendar.get(11), 2, sb2);
        sb2.append(':');
        io.sentry.vendor.gson.internal.bind.util.a.b(gregorianCalendar.get(12), 2, sb2);
        sb2.append(':');
        io.sentry.vendor.gson.internal.bind.util.a.b(gregorianCalendar.get(13), 2, sb2);
        sb2.append('.');
        io.sentry.vendor.gson.internal.bind.util.a.b(gregorianCalendar.get(14), 3, sb2);
        int offset = timeZone.getOffset(gregorianCalendar.getTimeInMillis());
        if (offset != 0) {
            int i5 = offset / 60000;
            int abs = Math.abs(i5 / 60);
            int abs2 = Math.abs(i5 % 60);
            sb2.append(offset >= 0 ? '+' : '-');
            io.sentry.vendor.gson.internal.bind.util.a.b(abs, 2, sb2);
            sb2.append(':');
            io.sentry.vendor.gson.internal.bind.util.a.b(abs2, 2, sb2);
        } else {
            sb2.append('Z');
        }
        return sb2.toString();
    }

    public static int G(Object obj) {
        if (Build.VERSION.SDK_INT >= 28) {
            return androidx.core.view.h.o(obj);
        }
        try {
            return ((Integer) obj.getClass().getMethod("getType", null).invoke(obj, null)).intValue();
        } catch (IllegalAccessException e9) {
            Log.e("IconCompat", "Unable to get icon type " + obj, e9);
            return -1;
        } catch (NoSuchMethodException e10) {
            Log.e("IconCompat", "Unable to get icon type " + obj, e10);
            return -1;
        } catch (InvocationTargetException e11) {
            Log.e("IconCompat", "Unable to get icon type " + obj, e11);
            return -1;
        }
    }

    public static Uri H(Object obj) {
        if (Build.VERSION.SDK_INT >= 28) {
            return androidx.core.view.h.p(obj);
        }
        try {
            return (Uri) obj.getClass().getMethod("getUri", null).invoke(obj, null);
        } catch (IllegalAccessException e9) {
            Log.e("IconCompat", "Unable to get icon uri", e9);
            return null;
        } catch (NoSuchMethodException e10) {
            Log.e("IconCompat", "Unable to get icon uri", e10);
            return null;
        } catch (InvocationTargetException e11) {
            Log.e("IconCompat", "Unable to get icon uri", e11);
            return null;
        }
    }

    public static boolean I(jp.h hVar, hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        return hVar.Q(fqName) != null;
    }

    public static int J(int i5, int i6, int i10, int[] iArr) {
        while (i6 < i10) {
            if (iArr[i6] == i5) {
                return i6;
            }
            i6++;
        }
        return -1;
    }

    public static int K(int i5, String str) {
        int glCreateShader = GLES20.glCreateShader(i5);
        c("glCreateShader type=" + i5);
        GLES20.glShaderSource(glCreateShader, str);
        GLES20.glCompileShader(glCreateShader);
        int[] iArr = new int[1];
        GLES20.glGetShaderiv(glCreateShader, 35713, iArr, 0);
        if (iArr[0] != 0) {
            return glCreateShader;
        }
        Log.e("b", "Could not compile shader " + i5 + ":");
        StringBuilder sb2 = new StringBuilder(" ");
        sb2.append(GLES20.glGetShaderInfoLog(glCreateShader));
        Log.e("b", sb2.toString());
        GLES20.glDeleteShader(glCreateShader);
        return 0;
    }

    public static lm.b L(jm.f handler, int i5, mm.b dataBuilder, lm.a eventHandlerType) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        Intrinsics.checkNotNullParameter(dataBuilder, "dataBuilder");
        Intrinsics.checkNotNullParameter(eventHandlerType, "eventHandlerType");
        lm.b bVar = (lm.b) lm.b.f14096w.acquire();
        if (bVar == null) {
            bVar = new lm.b();
            bVar.f14099i = 2;
        }
        View r5 = handler.r();
        bVar.init(UIManagerHelper.getSurfaceId(r5), r5.getId());
        bVar.f14099i = i5;
        bVar.f14097d = dataBuilder;
        bVar.f14100v = eventHandlerType;
        bVar.f14098e = handler.f12892x;
        return bVar;
    }

    public static c5.b M(c5.h hVar) {
        long j;
        boolean z5;
        long j5;
        long j7;
        long j10;
        long j11;
        long currentTimeMillis = System.currentTimeMillis();
        Map map = hVar.f3336b;
        if (map == null) {
            return null;
        }
        String str = (String) map.get("Date");
        long N = str != null ? N(str) : 0L;
        String str2 = (String) map.get("Cache-Control");
        int i5 = 0;
        if (str2 != null) {
            String[] split = str2.split(",", 0);
            z5 = false;
            j5 = 0;
            j7 = 0;
            while (i5 < split.length) {
                String trim = split[i5].trim();
                if (trim.equals("no-cache") || trim.equals("no-store")) {
                    return null;
                }
                if (trim.startsWith("max-age=")) {
                    try {
                        j5 = Long.parseLong(trim.substring(8));
                    } catch (Exception unused) {
                    }
                } else if (trim.startsWith("stale-while-revalidate=")) {
                    j7 = Long.parseLong(trim.substring(23));
                } else if (trim.equals("must-revalidate") || trim.equals("proxy-revalidate")) {
                    z5 = true;
                }
                i5++;
            }
            j = 0;
            i5 = 1;
        } else {
            j = 0;
            z5 = false;
            j5 = 0;
            j7 = 0;
        }
        String str3 = (String) map.get("Expires");
        long N2 = str3 != null ? N(str3) : j;
        String str4 = (String) map.get("Last-Modified");
        long N3 = str4 != null ? N(str4) : j;
        String str5 = (String) map.get("ETag");
        if (i5 != 0) {
            long j12 = (j5 * 1000) + currentTimeMillis;
            j11 = z5 ? j12 : (j7 * 1000) + j12;
            j10 = j12;
        } else {
            j10 = (N <= j || N2 < N) ? j : (N2 - N) + currentTimeMillis;
            j11 = j10;
        }
        c5.b bVar = new c5.b();
        bVar.a = hVar.a;
        bVar.f3314b = str5;
        bVar.f3318f = j10;
        bVar.f3317e = j11;
        bVar.f3315c = N;
        bVar.f3316d = N3;
        bVar.f3319g = map;
        bVar.f3320h = hVar.f3337c;
        return bVar;
    }

    public static long N(String str) {
        try {
            SimpleDateFormat simpleDateFormat = new SimpleDateFormat("EEE, dd MMM yyyy HH:mm:ss zzz", Locale.US);
            simpleDateFormat.setTimeZone(DesugarTimeZone.getTimeZone("GMT"));
            return simpleDateFormat.parse(str).getTime();
        } catch (ParseException e9) {
            if ("0".equals(str) || "-1".equals(str)) {
                v.d("Unable to parse dateStr: %s, falling back to 0", str);
                return 0L;
            }
            Log.e("Volley", v.a("Unable to parse dateStr: %s, falling back to 0", str), e9);
            return 0L;
        }
    }

    public static int O(long j) {
        if (j > 2147483647L) {
            return Integer.MAX_VALUE;
        }
        if (j < -2147483648L) {
            return Integer.MIN_VALUE;
        }
        return (int) j;
    }

    public static void P(Uri uri, UUID uuid, Context context, String str) {
        Uri insert;
        ContentResolver contentResolver = context.getContentResolver();
        ContentValues contentValues = new ContentValues();
        if (uuid == null) {
            uuid = UUID.randomUUID();
        }
        if (str.equals(MediaStreamTrack.VIDEO_TRACK_KIND)) {
            contentValues.put("_display_name", uuid.toString());
            contentValues.put("mime_type", contentResolver.getType(uri));
            insert = contentResolver.insert(MediaStore.Video.Media.EXTERNAL_CONTENT_URI, contentValues);
        } else {
            contentValues.put("_display_name", uuid.toString());
            contentValues.put("mime_type", contentResolver.getType(uri));
            insert = contentResolver.insert(MediaStore.Images.Media.EXTERNAL_CONTENT_URI, contentValues);
        }
        f(uri, insert, contentResolver);
    }

    public static final String Q(ip.f classDescriptor, String jvmDescriptor) {
        String internalName;
        Intrinsics.checkNotNullParameter(aq.g.f2635e, "<this>");
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        Intrinsics.checkNotNullParameter(jvmDescriptor, "jvmDescriptor");
        Intrinsics.checkNotNullParameter(classDescriptor, "<this>");
        String str = hp.d.a;
        hq.b f2 = hp.d.f(oq.e.g(classDescriptor).a);
        if (f2 != null) {
            internalName = pq.b.e(f2);
            Intrinsics.checkNotNullExpressionValue(internalName, "internalNameByClassId(...)");
        } else {
            internalName = e4.f.l(classDescriptor, aq.g.f2636f);
        }
        Intrinsics.checkNotNullParameter(internalName, "internalName");
        Intrinsics.checkNotNullParameter(jvmDescriptor, "jvmDescriptor");
        return internalName + '.' + jvmDescriptor;
    }

    public static final void R(Object obj) {
        if (obj instanceof r) {
            throw ((r) obj).f8832d;
        }
    }

    public static int[] S(Collection collection) {
        if (collection instanceof hi.a) {
            hi.a aVar = (hi.a) collection;
            return Arrays.copyOfRange(aVar.f10031d, aVar.f10032e, aVar.f10033i);
        }
        Object[] array = collection.toArray();
        int length = array.length;
        int[] iArr = new int[length];
        for (int i5 = 0; i5 < length; i5++) {
            Object obj = array[i5];
            obj.getClass();
            iArr[i5] = ((Number) obj).intValue();
        }
        return iArr;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:16:0x006b  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0096  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0099  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x0042  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0022  */
    /* JADX WARN: Type inference failed for: r8v3, types: [T, java.lang.Throwable] */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:28:0x0082 -> B:13:0x0065). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:29:0x0085 -> B:13:0x0065). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Object a(List list, s sVar, lo.c cVar) {
        e2.c cVar2;
        int i5;
        List list2;
        Ref.ObjectRef objectRef;
        Iterator it;
        Throwable th2;
        if (cVar instanceof e2.c) {
            cVar2 = (e2.c) cVar;
            int i6 = cVar2.f7841v;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                cVar2.f7841v = i6 - Integer.MIN_VALUE;
                Object obj = cVar2.f7840i;
                Object obj2 = ko.a.f13464d;
                i5 = cVar2.f7841v;
                if (i5 != 0) {
                    R(obj);
                    ArrayList arrayList = new ArrayList();
                    e2.d dVar = new e2.d(list, arrayList, null);
                    cVar2.f7838d = arrayList;
                    cVar2.f7841v = 1;
                    if (sVar.a(dVar, cVar2) == obj2) {
                        return obj2;
                    }
                    list2 = arrayList;
                } else {
                    if (i5 != 1) {
                        if (i5 != 2) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        it = cVar2.f7839e;
                        objectRef = (Ref.ObjectRef) cVar2.f7838d;
                        try {
                            R(obj);
                        } catch (Throwable th3) {
                            T t5 = objectRef.element;
                            if (t5 == 0) {
                                objectRef.element = th3;
                            } else {
                                Intrinsics.checkNotNull(t5);
                                fo.f.a((Throwable) objectRef.element, th3);
                            }
                        }
                        while (it.hasNext()) {
                            Function1 function1 = (Function1) it.next();
                            cVar2.f7838d = objectRef;
                            cVar2.f7839e = it;
                            cVar2.f7841v = 2;
                            if (function1.invoke(cVar2) == obj2) {
                                return obj2;
                            }
                        }
                        th2 = (Throwable) objectRef.element;
                        if (th2 == null) {
                            return Unit.a;
                        }
                        throw th2;
                    }
                    list2 = (List) cVar2.f7838d;
                    R(obj);
                }
                objectRef = new Ref.ObjectRef();
                it = list2.iterator();
                while (it.hasNext()) {
                }
                th2 = (Throwable) objectRef.element;
                if (th2 == null) {
                }
            }
        }
        cVar2 = new e2.c(cVar);
        Object obj3 = cVar2.f7840i;
        Object obj22 = ko.a.f13464d;
        i5 = cVar2.f7841v;
        if (i5 != 0) {
        }
        objectRef = new Ref.ObjectRef();
        it = list2.iterator();
        while (it.hasNext()) {
        }
        th2 = (Throwable) objectRef.element;
        if (th2 == null) {
        }
    }

    public static void b(SpannableStringBuilder spannableStringBuilder, Object obj, int i5, int i6) {
        for (Object obj2 : spannableStringBuilder.getSpans(i5, i6, obj.getClass())) {
            if (spannableStringBuilder.getSpanStart(obj2) == i5 && spannableStringBuilder.getSpanEnd(obj2) == i6 && spannableStringBuilder.getSpanFlags(obj2) == 33) {
                spannableStringBuilder.removeSpan(obj2);
            }
        }
        spannableStringBuilder.setSpan(obj, i5, i6, 33);
    }

    public static void c(String str) {
        int glGetError = GLES20.glGetError();
        if (glGetError == 0) {
            return;
        }
        Log.e("b", str + ": glError " + glGetError);
        throw new RuntimeException(str + ": glError " + glGetError);
    }

    public static int d(long j) {
        int i5 = (int) j;
        ys.d.q(((long) i5) == j, "Out of range: %s", j);
        return i5;
    }

    public static int e(int i5, int i6) {
        if (i6 <= 1073741823) {
            return Math.min(Math.max(i5, i6), 1073741823);
        }
        throw new IllegalArgumentException(l.n("min (%s) must be less than or equal to max (%s)", Integer.valueOf(i6), 1073741823));
    }

    public static void f(Uri uri, Uri uri2, ContentResolver contentResolver) {
        try {
            OutputStream openOutputStream = contentResolver.openOutputStream(uri2);
            InputStream openInputStream = contentResolver.openInputStream(uri);
            byte[] bArr = new byte[8192];
            while (true) {
                int read = openInputStream.read(bArr);
                if (read == -1) {
                    return;
                } else {
                    openOutputStream.write(bArr, 0, read);
                }
            }
        } catch (IOException e9) {
            e9.printStackTrace();
        }
    }

    public static final ArrayList g(ArrayList newValueParameterTypes, List oldValueParameters, ip.v newOwner) {
        Intrinsics.checkNotNullParameter(newValueParameterTypes, "newValueParameterTypes");
        Intrinsics.checkNotNullParameter(oldValueParameters, "oldValueParameters");
        Intrinsics.checkNotNullParameter(newOwner, "newOwner");
        newValueParameterTypes.size();
        oldValueParameters.size();
        ArrayList n02 = CollectionsKt.n0(newValueParameterTypes, oldValueParameters);
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(n02, 10));
        Iterator it = n02.iterator();
        while (it.hasNext()) {
            Pair pair = (Pair) it.next();
            y yVar = (y) pair.f13474d;
            r0 r0Var = (r0) pair.f13475e;
            int i5 = r0Var.f14177y;
            jp.h annotations = r0Var.getAnnotations();
            hq.e name = r0Var.getName();
            Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
            boolean C0 = r0Var.C0();
            boolean z5 = r0Var.F;
            boolean z6 = r0Var.G;
            y f2 = r0Var.H != null ? oq.e.j(newOwner).g().f(yVar) : null;
            o0 d6 = r0Var.d();
            Intrinsics.checkNotNullExpressionValue(d6, "getSource(...)");
            arrayList.add(new r0(newOwner, null, i5, annotations, name, yVar, C0, z5, z6, f2, d6));
        }
        return arrayList;
    }

    public static WritableMap h(mm.b dataBuilder) {
        Intrinsics.checkNotNullParameter(dataBuilder, "dataBuilder");
        WritableMap createMap = Arguments.createMap();
        dataBuilder.a(createMap);
        createMap.putInt("handlerTag", dataBuilder.a);
        createMap.putInt("state", dataBuilder.f14521b);
        return createMap;
    }

    public static final r i(Throwable exception) {
        Intrinsics.checkNotNullParameter(exception, "exception");
        return new r(exception);
    }

    public static File j(Context context, UUID uuid, String str) {
        if (uuid == null) {
            try {
                uuid = UUID.randomUUID();
            } catch (Exception e9) {
                e9.printStackTrace();
                return null;
            }
        }
        File file = new File(context.getCacheDir(), "rn_image_picker_lib_temp_" + uuid + "." + str);
        file.createNewFile();
        return file;
    }

    public static o1.d k(String type, String str) {
        Exception a10;
        Intrinsics.checkNotNullParameter(type, "type");
        try {
            q1.a aVar = new q1.a(new p1.a(26), null);
            if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_ABORT_ERROR")) {
                a10 = n.a(new p1.a(0), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_CONSTRAINT_ERROR")) {
                a10 = n.a(new p1.a(1), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_DATA_CLONE_ERROR")) {
                a10 = n.a(new p1.a(2), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_DATA_ERROR")) {
                a10 = n.a(new p1.a(3), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_ENCODING_ERROR")) {
                a10 = n.a(new p1.a(4), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_HIERARCHY_REQUEST_ERROR")) {
                a10 = n.a(new p1.a(5), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_IN_USE_ATTRIBUTE_ERROR")) {
                a10 = n.a(new p1.a(6), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_INVALID_CHARACTER_ERROR")) {
                a10 = n.a(new p1.a(7), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_INVALID_MODIFICATION_ERROR")) {
                a10 = n.a(new p1.a(8), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_INVALID_NODE_TYPE_ERROR")) {
                a10 = n.a(new p1.a(9), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_INVALID_STATE_ERROR")) {
                a10 = n.a(new p1.a(10), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NAMESPACE_ERROR")) {
                a10 = n.a(new p1.a(11), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NETWORK_ERROR")) {
                a10 = n.a(new p1.a(12), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NO_MODIFICATION_ALLOWED_ERROR")) {
                a10 = n.a(new p1.a(13), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NOT_ALLOWED_ERROR")) {
                a10 = n.a(new p1.a(14), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NOT_FOUND_ERROR")) {
                a10 = n.a(new p1.a(15), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NOT_READABLE_ERROR")) {
                a10 = n.a(new p1.a(16), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NOT_SUPPORTED_ERROR")) {
                a10 = n.a(new p1.a(17), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_OPERATION_ERROR")) {
                a10 = n.a(new p1.a(18), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_OPT_OUT_ERROR")) {
                a10 = n.a(new p1.a(19), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_QUOTA_EXCEEDED_ERROR")) {
                a10 = n.a(new p1.a(20), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_READ_ONLY_ERROR")) {
                a10 = n.a(new p1.a(21), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_SECURITY_ERROR")) {
                a10 = n.a(new p1.a(22), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_SYNTAX_ERROR")) {
                a10 = n.a(new p1.a(23), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_TIMEOUT_ERROR")) {
                a10 = n.a(new p1.a(24), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_TRANSACTION_INACTIVE_ERROR")) {
                a10 = n.a(new p1.a(25), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_UNKNOWN_ERROR")) {
                a10 = n.a(new p1.a(26), str, aVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_VERSION_ERROR")) {
                a10 = n.a(new p1.a(27), str, aVar);
            } else {
                if (!Intrinsics.areEqual(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_WRONG_DOCUMENT_ERROR")) {
                    throw new r1.a();
                }
                a10 = n.a(new p1.a(28), str, aVar);
            }
            return (o1.d) a10;
        } catch (r1.a unused) {
            return new o1.c(str, type);
        }
    }

    public static IconCompat l(Icon icon) {
        icon.getClass();
        int G = G(icon);
        if (G == 2) {
            return IconCompat.d(null, D(icon), C(icon));
        }
        if (G == 4) {
            Uri H = H(icon);
            PorterDuff.Mode mode = IconCompat.k;
            H.getClass();
            String uri = H.toString();
            uri.getClass();
            IconCompat iconCompat = new IconCompat(4);
            iconCompat.f1515b = uri;
            return iconCompat;
        }
        if (G != 6) {
            IconCompat iconCompat2 = new IconCompat(-1);
            iconCompat2.f1515b = icon;
            return iconCompat2;
        }
        Uri H2 = H(icon);
        PorterDuff.Mode mode2 = IconCompat.k;
        H2.getClass();
        String uri2 = H2.toString();
        uri2.getClass();
        IconCompat iconCompat3 = new IconCompat(6);
        iconCompat3.f1515b = uri2;
        return iconCompat3;
    }

    public static BigDecimal m(Double d6) {
        return BigDecimal.valueOf(d6.doubleValue()).setScale(6, RoundingMode.DOWN);
    }

    public static byte[] n(byte[] bArr) {
        int length = bArr.length;
        byte[] bArr2 = io.sentry.vendor.a.f12052c;
        int i5 = (length / 3) * 4;
        int i6 = length % 3;
        if (i6 == 1) {
            i5 += 2;
        } else if (i6 == 2) {
            i5 += 3;
        }
        byte[] bArr3 = new byte[i5];
        int i10 = 0;
        int i11 = 0;
        int i12 = -1;
        while (true) {
            int i13 = i10 + 3;
            if (i13 > length) {
                break;
            }
            int i14 = (bArr[i10 + 2] & 255) | ((bArr[i10] & 255) << 16) | ((bArr[i10 + 1] & 255) << 8);
            bArr3[i11] = bArr2[(i14 >> 18) & 63];
            bArr3[i11 + 1] = bArr2[(i14 >> 12) & 63];
            bArr3[i11 + 2] = bArr2[(i14 >> 6) & 63];
            bArr3[i11 + 3] = bArr2[i14 & 63];
            int i15 = i11 + 4;
            i12--;
            if (i12 == 0) {
                i11 += 5;
                bArr3[i15] = 10;
                i12 = 19;
            } else {
                i11 = i15;
            }
            i10 = i13;
        }
        if (i10 == length - 1) {
            int i16 = (bArr[i10] & 255) << 4;
            bArr3[i11] = bArr2[(i16 >> 6) & 63];
            bArr3[i11 + 1] = bArr2[i16 & 63];
            return bArr3;
        }
        if (i10 == length - 2) {
            int i17 = ((bArr[i10 + 1] & 255) << 2) | ((bArr[i10] & 255) << 10);
            bArr3[i11] = bArr2[(i17 >> 12) & 63];
            bArr3[i11 + 1] = bArr2[(i17 >> 6) & 63];
            bArr3[i11 + 2] = bArr2[i17 & 63];
        }
        return bArr3;
    }

    public static String o(byte[] bArr) {
        try {
            return new String(n(bArr), "US-ASCII");
        } catch (UnsupportedEncodingException e9) {
            throw new AssertionError(e9);
        }
    }

    public static final mo.a p(Enum[] entries) {
        Intrinsics.checkNotNullParameter(entries, "entries");
        return new mo.a(entries);
    }

    public static jp.b q(jp.h hVar, hq.c fqName) {
        Object obj;
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Iterator it = hVar.iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            if (Intrinsics.areEqual(((jp.b) obj).a(), fqName)) {
                break;
            }
        }
        return (jp.b) obj;
    }

    public static Date r() {
        return Calendar.getInstance(io.sentry.vendor.gson.internal.bind.util.a.a).getTime();
    }

    public static Date s(long j) {
        Calendar calendar = Calendar.getInstance(io.sentry.vendor.gson.internal.bind.util.a.a);
        calendar.setTimeInMillis(j);
        return calendar.getTime();
    }

    public static Date t(String str) {
        try {
            return io.sentry.vendor.gson.internal.bind.util.a.c(str, new ParsePosition(0));
        } catch (ParseException unused) {
            throw new IllegalArgumentException(a3.e.k("timestamp is not ISO format ", str));
        }
    }

    public static Date u(String str) {
        try {
            return s(new BigDecimal(str).setScale(3, RoundingMode.DOWN).movePointRight(3).longValue());
        } catch (NumberFormatException unused) {
            throw new IllegalArgumentException(a3.e.k("timestamp is not millis format ", str));
        }
    }

    public static WritableMap v(String str, String str2) {
        WritableMap createMap = Arguments.createMap();
        createMap.putString("errorCode", str);
        if (str2 != null) {
            createMap.putString("errorMessage", str2);
        }
        return createMap;
    }

    public static final UIManager w(UIManagerHelper uIManagerHelper, ThemedReactContext reactContext) {
        Intrinsics.checkNotNullParameter(uIManagerHelper, "<this>");
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        UIManager uIManager = UIManagerHelper.getUIManager(reactContext, 2);
        if (uIManager != null) {
            return uIManager;
        }
        throw new IllegalStateException("[RNScreens] UIManager must not be null");
    }

    public static int[] x(Context context, Uri uri) {
        try {
            InputStream openInputStream = context.getContentResolver().openInputStream(uri);
            BitmapFactory.Options options = new BitmapFactory.Options();
            options.inJustDecodeBounds = true;
            BitmapFactory.decodeStream(openInputStream, null, options);
            return new int[]{options.outWidth, options.outHeight};
        } catch (FileNotFoundException e9) {
            e9.printStackTrace();
            return new int[]{0, 0};
        }
    }

    public static CallInvokerHolderImpl y(ReactApplicationContext reactApplicationContext) {
        try {
            try {
                return (CallInvokerHolderImpl) reactApplicationContext.getClass().getMethod("getJSCallInvokerHolder", null).invoke(reactApplicationContext, null);
            } catch (Exception e9) {
                throw new RuntimeException("Failed to get JSCallInvokerHolder", e9);
            }
        } catch (Exception unused) {
            Object invoke = reactApplicationContext.getClass().getMethod("getCatalystInstance", null).invoke(reactApplicationContext, null);
            return (CallInvokerHolderImpl) invoke.getClass().getMethod("getJSCallInvokerHolder", null).invoke(invoke, null);
        }
    }

    public static int z() {
        EGLDisplay eglGetDisplay = EGL14.eglGetDisplay(0);
        int[] iArr = new int[2];
        EGL14.eglInitialize(eglGetDisplay, iArr, 0, iArr, 1);
        EGLConfig[] eGLConfigArr = new EGLConfig[1];
        int[] iArr2 = new int[1];
        EGL14.eglChooseConfig(eglGetDisplay, new int[]{12351, 12430, 12329, 0, 12352, 4, 12339, 1, 12344}, 0, eGLConfigArr, 0, 1, iArr2, 0);
        if (iArr2[0] == 0) {
            return 0;
        }
        EGLConfig eGLConfig = eGLConfigArr[0];
        EGLSurface eglCreatePbufferSurface = EGL14.eglCreatePbufferSurface(eglGetDisplay, eGLConfig, new int[]{12375, 64, 12374, 64, 12344}, 0);
        EGLContext eglCreateContext = EGL14.eglCreateContext(eglGetDisplay, eGLConfig, EGL14.EGL_NO_CONTEXT, new int[]{12440, 2, 12344}, 0);
        EGL14.eglMakeCurrent(eglGetDisplay, eglCreatePbufferSurface, eglCreatePbufferSurface, eglCreateContext);
        int[] iArr3 = new int[1];
        GLES20.glGetIntegerv(3379, iArr3, 0);
        EGLSurface eGLSurface = EGL14.EGL_NO_SURFACE;
        EGL14.eglMakeCurrent(eglGetDisplay, eGLSurface, eGLSurface, EGL14.EGL_NO_CONTEXT);
        EGL14.eglDestroySurface(eglGetDisplay, eglCreatePbufferSurface);
        EGL14.eglDestroyContext(eglGetDisplay, eglCreateContext);
        EGL14.eglTerminate(eglGetDisplay);
        return iArr3[0];
    }
}
