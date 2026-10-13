package n2;

import android.content.res.AssetManager;
import android.media.MediaMetadataRetriever;
import android.os.Build;
import android.system.ErrnoException;
import android.system.Os;
import android.system.OsConstants;
import android.util.Log;
import android.util.Pair;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.imageutils.TiffUtil;
import com.facebook.react.common.assets.ReactFontManager;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import j$.util.DesugarTimeZone;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.ByteArrayOutputStream;
import java.io.Closeable;
import java.io.EOFException;
import java.io.File;
import java.io.FileDescriptor;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.text.SimpleDateFormat;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.zip.CRC32;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes.dex */
public final class h {
    public static final e W;
    public static final e[][] X;
    public static final e[] Y;
    public static final HashMap[] Z;
    public static final HashMap[] a0;

    /* renamed from: b0, reason: collision with root package name */
    public static final Set f14747b0;

    /* renamed from: c0, reason: collision with root package name */
    public static final HashMap f14748c0;

    /* renamed from: d0, reason: collision with root package name */
    public static final Charset f14749d0;

    /* renamed from: e0, reason: collision with root package name */
    public static final byte[] f14750e0;

    /* renamed from: f0, reason: collision with root package name */
    public static final byte[] f14751f0;

    /* renamed from: g0, reason: collision with root package name */
    public static final Pattern f14752g0;
    public static final Pattern h0;

    /* renamed from: i0, reason: collision with root package name */
    public static final Pattern f14753i0;
    public String a;

    /* renamed from: b, reason: collision with root package name */
    public FileDescriptor f14759b;

    /* renamed from: c, reason: collision with root package name */
    public AssetManager.AssetInputStream f14760c;

    /* renamed from: d, reason: collision with root package name */
    public int f14761d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f14762e;

    /* renamed from: f, reason: collision with root package name */
    public final HashMap[] f14763f;

    /* renamed from: g, reason: collision with root package name */
    public final HashSet f14764g;

    /* renamed from: h, reason: collision with root package name */
    public ByteOrder f14765h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f14766i;
    public boolean j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public int f14767l;

    /* renamed from: m, reason: collision with root package name */
    public int f14768m;

    /* renamed from: n, reason: collision with root package name */
    public byte[] f14769n;

    /* renamed from: o, reason: collision with root package name */
    public int f14770o;

    /* renamed from: p, reason: collision with root package name */
    public int f14771p;

    /* renamed from: q, reason: collision with root package name */
    public int f14772q;

    /* renamed from: r, reason: collision with root package name */
    public int f14773r;

    /* renamed from: s, reason: collision with root package name */
    public int f14774s;

    /* renamed from: t, reason: collision with root package name */
    public d f14775t;

    /* renamed from: u, reason: collision with root package name */
    public boolean f14776u;

    /* renamed from: v, reason: collision with root package name */
    public static final boolean f14754v = Log.isLoggable("ExifInterface", 3);

    /* renamed from: w, reason: collision with root package name */
    public static final List f14755w = Arrays.asList(1, 6, 3, 8);

    /* renamed from: x, reason: collision with root package name */
    public static final List f14756x = Arrays.asList(2, 7, 4, 5);

    /* renamed from: y, reason: collision with root package name */
    public static final int[] f14757y = {8, 8, 8};

    /* renamed from: z, reason: collision with root package name */
    public static final int[] f14758z = {8};
    public static final byte[] A = {-1, -40, -1};
    public static final byte[] B = {102, 116, 121, 112};
    public static final byte[] C = {109, 105, 102, 49};
    public static final byte[] D = {104, 101, 105, 99};
    public static final byte[] E = {97, 118, 105, 102};
    public static final byte[] F = {97, 118, 105, 115};
    public static final byte[] G = {79, 76, 89, 77, 80, 0};
    public static final byte[] H = {79, 76, 89, 77, 80, 85, 83, 0, 73, 73};
    public static final byte[] I = {-119, 80, 78, 71, 13, 10, 26, 10};
    public static final byte[] J = "XML:com.adobe.xmp\u0000\u0000\u0000\u0000\u0000".getBytes(StandardCharsets.UTF_8);
    public static final byte[] K = {82, 73, 70, 70};
    public static final byte[] L = {87, 69, 66, 80};
    public static final byte[] M = {69, 88, 73, 70};
    public static final byte[] N = {-99, 1, 42};
    public static final byte[] O = "VP8X".getBytes(Charset.defaultCharset());
    public static final byte[] P = "VP8L".getBytes(Charset.defaultCharset());
    public static final byte[] Q = "VP8 ".getBytes(Charset.defaultCharset());
    public static final byte[] R = "ANIM".getBytes(Charset.defaultCharset());
    public static final byte[] S = "ANMF".getBytes(Charset.defaultCharset());
    public static final String[] T = {"", "BYTE", "STRING", "USHORT", "ULONG", "URATIONAL", "SBYTE", "UNDEFINED", "SSHORT", "SLONG", "SRATIONAL", "SINGLE", "DOUBLE", "IFD"};
    public static final int[] U = {0, 1, 1, 2, 4, 8, 1, 1, 2, 4, 8, 4, 8, 1};
    public static final byte[] V = {65, 83, 67, 73, 73, 0, 0, 0};

    static {
        e[] eVarArr = {new e("NewSubfileType", 254, 4), new e("SubfileType", 255, 4), new e("ImageWidth", IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER, 3, 4), new e("ImageLength", 257, 3, 4), new e("BitsPerSample", 258, 3), new e("Compression", 259, 3), new e("PhotometricInterpretation", 262, 3), new e("ImageDescription", 270, 2), new e("Make", 271, 2), new e("Model", 272, 2), new e("StripOffsets", 273, 3, 4), new e("Orientation", TiffUtil.TIFF_TAG_ORIENTATION, 3), new e("SamplesPerPixel", 277, 3), new e("RowsPerStrip", 278, 3, 4), new e("StripByteCounts", 279, 3, 4), new e("XResolution", 282, 5), new e("YResolution", 283, 5), new e("PlanarConfiguration", 284, 3), new e("ResolutionUnit", 296, 3), new e("TransferFunction", 301, 3), new e("Software", 305, 2), new e("DateTime", 306, 2), new e("Artist", 315, 2), new e("WhitePoint", 318, 5), new e("PrimaryChromaticities", 319, 5), new e("SubIFDPointer", 330, 4), new e("JPEGInterchangeFormat", 513, 4), new e("JPEGInterchangeFormatLength", 514, 4), new e("YCbCrCoefficients", 529, 5), new e("YCbCrSubSampling", 530, 3), new e("YCbCrPositioning", 531, 3), new e("ReferenceBlackWhite", 532, 5), new e("Copyright", 33432, 2), new e("ExifIFDPointer", 34665, 4), new e("GPSInfoIFDPointer", 34853, 4), new e("SensorTopBorder", 4, 4), new e("SensorLeftBorder", 5, 4), new e("SensorBottomBorder", 6, 4), new e("SensorRightBorder", 7, 4), new e("ISO", 23, 3), new e("JpgFromRaw", 46, 7), new e("Xmp", ReactFontManager.TypefaceStyle.BOLD, 1)};
        e[] eVarArr2 = {new e("ExposureTime", 33434, 5), new e("FNumber", 33437, 5), new e("ExposureProgram", 34850, 3), new e("SpectralSensitivity", 34852, 2), new e("PhotographicSensitivity", 34855, 3), new e("OECF", 34856, 7), new e("SensitivityType", 34864, 3), new e("StandardOutputSensitivity", 34865, 4), new e("RecommendedExposureIndex", 34866, 4), new e("ISOSpeed", 34867, 4), new e("ISOSpeedLatitudeyyy", 34868, 4), new e("ISOSpeedLatitudezzz", 34869, 4), new e("ExifVersion", 36864, 2), new e("DateTimeOriginal", 36867, 2), new e("DateTimeDigitized", 36868, 2), new e("OffsetTime", 36880, 2), new e("OffsetTimeOriginal", 36881, 2), new e("OffsetTimeDigitized", 36882, 2), new e("ComponentsConfiguration", 37121, 7), new e("CompressedBitsPerPixel", 37122, 5), new e("ShutterSpeedValue", 37377, 10), new e("ApertureValue", 37378, 5), new e("BrightnessValue", 37379, 10), new e("ExposureBiasValue", 37380, 10), new e("MaxApertureValue", 37381, 5), new e("SubjectDistance", 37382, 5), new e("MeteringMode", 37383, 3), new e("LightSource", 37384, 3), new e("Flash", 37385, 3), new e("FocalLength", 37386, 5), new e("SubjectArea", 37396, 3), new e("MakerNote", 37500, 7), new e("UserComment", 37510, 7), new e("SubSecTime", 37520, 2), new e("SubSecTimeOriginal", 37521, 2), new e("SubSecTimeDigitized", 37522, 2), new e("FlashpixVersion", 40960, 7), new e("ColorSpace", 40961, 3), new e("PixelXDimension", 40962, 3, 4), new e("PixelYDimension", 40963, 3, 4), new e("RelatedSoundFile", 40964, 2), new e("InteroperabilityIFDPointer", 40965, 4), new e("FlashEnergy", 41483, 5), new e("SpatialFrequencyResponse", 41484, 7), new e("FocalPlaneXResolution", 41486, 5), new e("FocalPlaneYResolution", 41487, 5), new e("FocalPlaneResolutionUnit", 41488, 3), new e("SubjectLocation", 41492, 3), new e("ExposureIndex", 41493, 5), new e("SensingMethod", 41495, 3), new e("FileSource", 41728, 7), new e("SceneType", 41729, 7), new e("CFAPattern", 41730, 7), new e("CustomRendered", 41985, 3), new e("ExposureMode", 41986, 3), new e("WhiteBalance", 41987, 3), new e("DigitalZoomRatio", 41988, 5), new e("FocalLengthIn35mmFilm", 41989, 3), new e("SceneCaptureType", 41990, 3), new e("GainControl", 41991, 3), new e("Contrast", 41992, 3), new e("Saturation", 41993, 3), new e("Sharpness", 41994, 3), new e("DeviceSettingDescription", 41995, 7), new e("SubjectDistanceRange", 41996, 3), new e("ImageUniqueID", 42016, 2), new e("CameraOwnerName", 42032, 2), new e("BodySerialNumber", 42033, 2), new e("LensSpecification", 42034, 5), new e("LensMake", 42035, 2), new e("LensModel", 42036, 2), new e("Gamma", 42240, 5), new e("DNGVersion", 50706, 1), new e("DefaultCropSize", 50720, 3, 4)};
        e[] eVarArr3 = {new e("GPSVersionID", 0, 1), new e("GPSLatitudeRef", 1, 2), new e("GPSLatitude", 2, 5, 10), new e("GPSLongitudeRef", 3, 2), new e("GPSLongitude", 4, 5, 10), new e("GPSAltitudeRef", 5, 1), new e("GPSAltitude", 6, 5), new e("GPSTimeStamp", 7, 5), new e("GPSSatellites", 8, 2), new e("GPSStatus", 9, 2), new e("GPSMeasureMode", 10, 2), new e("GPSDOP", 11, 5), new e("GPSSpeedRef", 12, 2), new e("GPSSpeed", 13, 5), new e("GPSTrackRef", 14, 2), new e("GPSTrack", 15, 5), new e("GPSImgDirectionRef", 16, 2), new e("GPSImgDirection", 17, 5), new e("GPSMapDatum", 18, 2), new e("GPSDestLatitudeRef", 19, 2), new e("GPSDestLatitude", 20, 5), new e("GPSDestLongitudeRef", 21, 2), new e("GPSDestLongitude", 22, 5), new e("GPSDestBearingRef", 23, 2), new e("GPSDestBearing", 24, 5), new e("GPSDestDistanceRef", 25, 2), new e("GPSDestDistance", 26, 5), new e("GPSProcessingMethod", 27, 7), new e("GPSAreaInformation", 28, 7), new e("GPSDateStamp", 29, 2), new e("GPSDifferential", 30, 3), new e("GPSHPositioningError", 31, 5)};
        e[] eVarArr4 = {new e("InteroperabilityIndex", 1, 2)};
        e[] eVarArr5 = {new e("NewSubfileType", 254, 4), new e("SubfileType", 255, 4), new e("ThumbnailImageWidth", IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER, 3, 4), new e("ThumbnailImageLength", 257, 3, 4), new e("BitsPerSample", 258, 3), new e("Compression", 259, 3), new e("PhotometricInterpretation", 262, 3), new e("ImageDescription", 270, 2), new e("Make", 271, 2), new e("Model", 272, 2), new e("StripOffsets", 273, 3, 4), new e("ThumbnailOrientation", TiffUtil.TIFF_TAG_ORIENTATION, 3), new e("SamplesPerPixel", 277, 3), new e("RowsPerStrip", 278, 3, 4), new e("StripByteCounts", 279, 3, 4), new e("XResolution", 282, 5), new e("YResolution", 283, 5), new e("PlanarConfiguration", 284, 3), new e("ResolutionUnit", 296, 3), new e("TransferFunction", 301, 3), new e("Software", 305, 2), new e("DateTime", 306, 2), new e("Artist", 315, 2), new e("WhitePoint", 318, 5), new e("PrimaryChromaticities", 319, 5), new e("SubIFDPointer", 330, 4), new e("JPEGInterchangeFormat", 513, 4), new e("JPEGInterchangeFormatLength", 514, 4), new e("YCbCrCoefficients", 529, 5), new e("YCbCrSubSampling", 530, 3), new e("YCbCrPositioning", 531, 3), new e("ReferenceBlackWhite", 532, 5), new e("Copyright", 33432, 2), new e("ExifIFDPointer", 34665, 4), new e("GPSInfoIFDPointer", 34853, 4), new e("DNGVersion", 50706, 1), new e("DefaultCropSize", 50720, 3, 4)};
        W = new e("StripOffsets", 273, 3);
        X = new e[][]{eVarArr, eVarArr2, eVarArr3, eVarArr4, eVarArr5, eVarArr, new e[]{new e("ThumbnailImage", IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER, 7), new e("CameraSettingsIFDPointer", 8224, 4), new e("ImageProcessingIFDPointer", 8256, 4)}, new e[]{new e("PreviewImageStart", 257, 4), new e("PreviewImageLength", 258, 4)}, new e[]{new e("AspectFrame", 4371, 3)}, new e[]{new e("ColorSpace", 55, 3)}};
        Y = new e[]{new e("SubIFDPointer", 330, 4), new e("ExifIFDPointer", 34665, 4), new e("GPSInfoIFDPointer", 34853, 4), new e("InteroperabilityIFDPointer", 40965, 4), new e("CameraSettingsIFDPointer", 8224, 1), new e("ImageProcessingIFDPointer", 8256, 1)};
        Z = new HashMap[10];
        a0 = new HashMap[10];
        f14747b0 = Collections.unmodifiableSet(new HashSet(Arrays.asList("FNumber", "DigitalZoomRatio", "ExposureTime", "SubjectDistance")));
        f14748c0 = new HashMap();
        Charset forName = Charset.forName("US-ASCII");
        f14749d0 = forName;
        f14750e0 = "Exif\u0000\u0000".getBytes(forName);
        f14751f0 = "http://ns.adobe.com/xap/1.0/\u0000".getBytes(forName);
        Locale locale = Locale.US;
        new SimpleDateFormat("yyyy:MM:dd HH:mm:ss", locale).setTimeZone(DesugarTimeZone.getTimeZone("UTC"));
        new SimpleDateFormat("yyyy-MM-dd HH:mm:ss", locale).setTimeZone(DesugarTimeZone.getTimeZone("UTC"));
        int i5 = 0;
        while (true) {
            e[][] eVarArr6 = X;
            if (i5 >= eVarArr6.length) {
                HashMap hashMap = f14748c0;
                e[] eVarArr7 = Y;
                hashMap.put(Integer.valueOf(eVarArr7[0].a), 5);
                hashMap.put(Integer.valueOf(eVarArr7[1].a), 1);
                hashMap.put(Integer.valueOf(eVarArr7[2].a), 2);
                hashMap.put(Integer.valueOf(eVarArr7[3].a), 3);
                hashMap.put(Integer.valueOf(eVarArr7[4].a), 7);
                hashMap.put(Integer.valueOf(eVarArr7[5].a), 8);
                Pattern.compile(".*[1-9].*");
                f14752g0 = Pattern.compile("^(\\d{2}):(\\d{2}):(\\d{2})$");
                h0 = Pattern.compile("^(\\d{4}):(\\d{2}):(\\d{2})\\s(\\d{2}):(\\d{2}):(\\d{2})$");
                f14753i0 = Pattern.compile("^(\\d{4})-(\\d{2})-(\\d{2})\\s(\\d{2}):(\\d{2}):(\\d{2})$");
                return;
            }
            Z[i5] = new HashMap();
            a0[i5] = new HashMap();
            for (e eVar : eVarArr6[i5]) {
                Z[i5].put(Integer.valueOf(eVar.a), eVar);
                a0[i5].put(eVar.f14743b, eVar);
            }
            i5++;
        }
    }

    public h(File file) {
        e[][] eVarArr = X;
        this.f14763f = new HashMap[eVarArr.length];
        this.f14764g = new HashSet(eVarArr.length);
        this.f14765h = ByteOrder.BIG_ENDIAN;
        if (file == null) {
            throw new NullPointerException("file cannot be null");
        }
        r(file.getAbsolutePath());
    }

    public static Pair p(String str) {
        if (str.contains(",")) {
            String[] split = str.split(",", -1);
            Pair p3 = p(split[0]);
            if (((Integer) p3.first).intValue() == 2) {
                return p3;
            }
            for (int i5 = 1; i5 < split.length; i5++) {
                Pair p5 = p(split[i5]);
                int intValue = (((Integer) p5.first).equals(p3.first) || ((Integer) p5.second).equals(p3.first)) ? ((Integer) p3.first).intValue() : -1;
                int intValue2 = (((Integer) p3.second).intValue() == -1 || !(((Integer) p5.first).equals(p3.second) || ((Integer) p5.second).equals(p3.second))) ? -1 : ((Integer) p3.second).intValue();
                if (intValue == -1 && intValue2 == -1) {
                    return new Pair(2, -1);
                }
                if (intValue == -1) {
                    p3 = new Pair(Integer.valueOf(intValue2), -1);
                } else if (intValue2 == -1) {
                    p3 = new Pair(Integer.valueOf(intValue), -1);
                }
            }
            return p3;
        }
        if (!str.contains("/")) {
            try {
                try {
                    long parseLong = Long.parseLong(str);
                    return (parseLong < 0 || parseLong > 65535) ? parseLong < 0 ? new Pair(9, -1) : new Pair(4, -1) : new Pair(3, 4);
                } catch (NumberFormatException unused) {
                    return new Pair(2, -1);
                }
            } catch (NumberFormatException unused2) {
                Double.parseDouble(str);
                return new Pair(12, -1);
            }
        }
        String[] split2 = str.split("/", -1);
        if (split2.length == 2) {
            try {
                long parseDouble = (long) Double.parseDouble(split2[0]);
                long parseDouble2 = (long) Double.parseDouble(split2[1]);
                if (parseDouble >= 0 && parseDouble2 >= 0) {
                    if (parseDouble <= 2147483647L && parseDouble2 <= 2147483647L) {
                        return new Pair(10, 5);
                    }
                    return new Pair(5, -1);
                }
                return new Pair(10, -1);
            } catch (NumberFormatException unused3) {
            }
        }
        return new Pair(2, -1);
    }

    public static ByteOrder w(b bVar) {
        short readShort = bVar.readShort();
        boolean z5 = f14754v;
        if (readShort == 18761) {
            if (z5) {
                Log.d("ExifInterface", "readExifSegment: Byte Align II");
            }
            return ByteOrder.LITTLE_ENDIAN;
        }
        if (readShort == 19789) {
            if (z5) {
                Log.d("ExifInterface", "readExifSegment: Byte Align MM");
            }
            return ByteOrder.BIG_ENDIAN;
        }
        throw new IOException("Invalid byte order: " + Integer.toHexString(readShort));
    }

    public final void A(int i5, String str, String str2) {
        HashMap[] hashMapArr = this.f14763f;
        if (hashMapArr[i5].isEmpty() || hashMapArr[i5].get(str) == null) {
            return;
        }
        HashMap hashMap = hashMapArr[i5];
        hashMap.put(str2, (d) hashMap.get(str));
        hashMapArr[i5].remove(str);
    }

    /* JADX WARN: Removed duplicated region for block: B:70:0x00fb A[Catch: all -> 0x0104, Exception -> 0x0107, TryCatch #19 {Exception -> 0x0107, all -> 0x0104, blocks: (B:68:0x00f7, B:70:0x00fb, B:72:0x0119, B:76:0x010a), top: B:67:0x00f7 }] */
    /* JADX WARN: Removed duplicated region for block: B:76:0x010a A[Catch: all -> 0x0104, Exception -> 0x0107, TryCatch #19 {Exception -> 0x0107, all -> 0x0104, blocks: (B:68:0x00f7, B:70:0x00fb, B:72:0x0119, B:76:0x010a), top: B:67:0x00f7 }] */
    /* JADX WARN: Removed duplicated region for block: B:97:0x0153  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void B() {
        FileOutputStream fileOutputStream;
        File createTempFile;
        InputStream fileInputStream;
        Closeable closeable;
        FileOutputStream fileOutputStream2;
        InputStream fileInputStream2;
        FileOutputStream fileOutputStream3;
        InputStream fileInputStream3;
        Object obj;
        BufferedInputStream bufferedInputStream;
        int i5 = this.f14761d;
        if (i5 != 4 && i5 != 13 && i5 != 14) {
            throw new IOException("ExifInterface only supports saving attributes for JPEG, PNG, and WebP formats.");
        }
        if (this.f14759b == null && this.a == null) {
            throw new IOException("ExifInterface does not support saving attributes for the current input.");
        }
        if (this.f14766i && this.j && !this.k) {
            throw new IOException("ExifInterface does not support saving attributes when the image file has non-consecutive thumbnail strips");
        }
        int i6 = this.f14770o;
        InputStream inputStream = null;
        this.f14769n = (i6 == 6 || i6 == 7) ? n() : null;
        try {
            createTempFile = File.createTempFile("temp", "tmp");
            if (this.a != null) {
                fileInputStream = new FileInputStream(this.a);
            } else {
                Os.lseek(this.f14759b, 0L, OsConstants.SEEK_SET);
                fileInputStream = new FileInputStream(this.f14759b);
            }
            try {
                fileOutputStream = new FileOutputStream(createTempFile);
            } catch (Exception e9) {
                e = e9;
                fileOutputStream = null;
            } catch (Throwable th2) {
                th = th2;
                fileOutputStream = null;
            }
        } catch (Exception e10) {
            e = e10;
            fileOutputStream = null;
        } catch (Throwable th3) {
            th = th3;
            fileOutputStream = null;
        }
        try {
            ta.a.o(fileInputStream, fileOutputStream);
            ta.a.l(fileInputStream);
            ta.a.l(fileOutputStream);
            try {
            } catch (Throwable th4) {
                th = th4;
            }
            try {
                try {
                    fileInputStream3 = new FileInputStream(createTempFile);
                    try {
                        if (this.a != null) {
                            fileOutputStream2 = new FileOutputStream(this.a);
                        } else {
                            Os.lseek(this.f14759b, 0L, OsConstants.SEEK_SET);
                            fileOutputStream2 = new FileOutputStream(this.f14759b);
                        }
                        try {
                            bufferedInputStream = new BufferedInputStream(fileInputStream3);
                        } catch (Exception e11) {
                            e = e11;
                            obj = null;
                            inputStream = fileInputStream3;
                            try {
                                try {
                                    fileInputStream2 = new FileInputStream(createTempFile);
                                } catch (Exception e12) {
                                    e = e12;
                                }
                            } catch (Throwable th5) {
                                th = th5;
                            }
                            try {
                                if (this.a == null) {
                                }
                                fileOutputStream2 = fileOutputStream3;
                                ta.a.o(fileInputStream2, fileOutputStream2);
                                ta.a.l(fileInputStream2);
                                ta.a.l(fileOutputStream2);
                                throw new IOException("Failed to save new file", e);
                            } catch (Exception e13) {
                                e = e13;
                                inputStream = fileInputStream2;
                                throw new IOException("Failed to save new file. Original file is stored in " + createTempFile.getAbsolutePath(), e);
                            } catch (Throwable th6) {
                                th = th6;
                                inputStream = fileInputStream2;
                                ta.a.l(inputStream);
                                ta.a.l(fileOutputStream2);
                                throw th;
                            }
                        }
                    } catch (Exception e14) {
                        e = e14;
                        fileOutputStream2 = null;
                        obj = null;
                    }
                } catch (Exception e15) {
                    e = e15;
                    fileOutputStream2 = null;
                }
            } catch (Throwable th7) {
                th = th7;
                closeable = null;
                ta.a.l(inputStream);
                ta.a.l(closeable);
                if (0 == 0) {
                    createTempFile.delete();
                }
                throw th;
            }
            try {
                BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(fileOutputStream2);
                try {
                    int i10 = this.f14761d;
                    if (i10 == 4) {
                        C(bufferedInputStream, bufferedOutputStream);
                    } else if (i10 == 13) {
                        D(bufferedInputStream, bufferedOutputStream);
                    } else if (i10 == 14) {
                        E(bufferedInputStream, bufferedOutputStream);
                    }
                    ta.a.l(bufferedInputStream);
                    ta.a.l(bufferedOutputStream);
                    createTempFile.delete();
                    this.f14769n = null;
                } catch (Exception e16) {
                    e = e16;
                    inputStream = fileInputStream3;
                    fileInputStream2 = new FileInputStream(createTempFile);
                    if (this.a == null) {
                        fileOutputStream3 = new FileOutputStream(this.a);
                    } else {
                        Os.lseek(this.f14759b, 0L, OsConstants.SEEK_SET);
                        fileOutputStream3 = new FileOutputStream(this.f14759b);
                    }
                    fileOutputStream2 = fileOutputStream3;
                    ta.a.o(fileInputStream2, fileOutputStream2);
                    ta.a.l(fileInputStream2);
                    ta.a.l(fileOutputStream2);
                    throw new IOException("Failed to save new file", e);
                }
            } catch (Exception e17) {
                e = e17;
            } catch (Throwable th8) {
                th = th8;
                closeable = null;
                inputStream = bufferedInputStream;
                ta.a.l(inputStream);
                ta.a.l(closeable);
                if (0 == 0) {
                }
                throw th;
            }
        } catch (Exception e18) {
            e = e18;
            inputStream = fileInputStream;
            try {
                throw new IOException("Failed to copy original file to temp file", e);
            } catch (Throwable th9) {
                th = th9;
                ta.a.l(inputStream);
                ta.a.l(fileOutputStream);
                throw th;
            }
        } catch (Throwable th10) {
            th = th10;
            inputStream = fileInputStream;
            ta.a.l(inputStream);
            ta.a.l(fileOutputStream);
            throw th;
        }
    }

    public final void C(BufferedInputStream bufferedInputStream, BufferedOutputStream bufferedOutputStream) {
        if (f14754v) {
            Log.d("ExifInterface", "saveJpegAttributes starting with (inputStream: " + bufferedInputStream + ", outputStream: " + bufferedOutputStream + ")");
        }
        b bVar = new b(bufferedInputStream);
        c cVar = new c(bufferedOutputStream, ByteOrder.BIG_ENDIAN);
        if (bVar.readByte() != -1) {
            throw new IOException("Invalid marker");
        }
        cVar.c(-1);
        if (bVar.readByte() != -40) {
            throw new IOException("Invalid marker");
        }
        cVar.c(-40);
        cVar.c(-1);
        cVar.c(-31);
        this.f14771p = K(cVar);
        d dVar = this.f14775t;
        byte[] bArr = f14751f0;
        if (dVar != null) {
            cVar.write(-1);
            cVar.c(-31);
            cVar.l(bArr.length + 2 + this.f14775t.f14742d.length);
            cVar.write(bArr);
            cVar.write(this.f14775t.f14742d);
            this.f14776u = true;
        }
        byte[] bArr2 = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];
        while (bVar.readByte() == -1) {
            byte readByte = bVar.readByte();
            if (readByte == -39 || readByte == -38) {
                cVar.c(-1);
                cVar.c(readByte);
                ta.a.o(bVar, cVar);
                return;
            }
            if (readByte != -31) {
                cVar.c(-1);
                cVar.c(readByte);
                int readUnsignedShort = bVar.readUnsignedShort();
                cVar.l(readUnsignedShort);
                int i5 = readUnsignedShort - 2;
                if (i5 < 0) {
                    throw new IOException("Invalid length");
                }
                while (i5 > 0) {
                    int read = bVar.read(bArr2, 0, Math.min(i5, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT));
                    if (read >= 0) {
                        cVar.write(bArr2, 0, read);
                        i5 -= read;
                    }
                }
            } else {
                int readUnsignedShort2 = bVar.readUnsignedShort();
                int i6 = readUnsignedShort2 - 2;
                if (i6 < 0) {
                    throw new IOException("Invalid length");
                }
                int length = bArr.length;
                byte[] bArr3 = f14750e0;
                byte[] bArr4 = i6 >= length ? new byte[bArr.length] : i6 >= bArr3.length ? new byte[bArr3.length] : null;
                if (bArr4 != null) {
                    bVar.readFully(bArr4);
                    if (ta.a.J(bArr4, bArr3) || ta.a.J(bArr4, bArr)) {
                        bVar.c(i6 - bArr4.length);
                    }
                }
                cVar.c(-1);
                cVar.c(readByte);
                cVar.l(readUnsignedShort2);
                if (bArr4 != null) {
                    i6 -= bArr4.length;
                    cVar.write(bArr4);
                }
                while (i6 > 0) {
                    int read2 = bVar.read(bArr2, 0, Math.min(i6, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT));
                    if (read2 >= 0) {
                        cVar.write(bArr2, 0, read2);
                        i6 -= read2;
                    }
                }
            }
        }
        throw new IOException("Invalid marker");
    }

    /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxOverflowException: Regions count limit reached
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        */
    /* JADX WARN: Removed duplicated region for block: B:11:0x0043 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0077 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:46:0x0057 A[SYNTHETIC] */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:8:0x0075 -> B:9:0x0041). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void D(java.io.BufferedInputStream r9, java.io.BufferedOutputStream r10) {
        /*
            r8 = this;
            boolean r0 = n2.h.f14754v
            if (r0 == 0) goto L24
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "savePngAttributes starting with (inputStream: "
            r0.<init>(r1)
            r0.append(r9)
            java.lang.String r1 = ", outputStream: "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ExifInterface"
            android.util.Log.d(r1, r0)
        L24:
            n2.b r0 = new n2.b
            r0.<init>(r9)
            n2.c r9 = new n2.c
            java.nio.ByteOrder r1 = java.nio.ByteOrder.BIG_ENDIAN
            r9.<init>(r10, r1)
            byte[] r10 = n2.h.I
            int r10 = r10.length
            ta.a.p(r0, r9, r10)
            n2.d r10 = r8.f14775t
            r1 = 1
            r2 = 0
            if (r10 != 0) goto L40
            boolean r10 = r8.f14776u
            if (r10 == 0) goto L75
        L40:
            r10 = r1
        L41:
            if (r1 != 0) goto L4a
            if (r10 == 0) goto L46
            goto L4a
        L46:
            ta.a.o(r0, r9)
            return
        L4a:
            int r3 = r0.readInt()
            int r4 = r0.readInt()
            r5 = 1229472850(0x49484452, float:820293.1)
            if (r4 != r5) goto L77
            r9.f(r3)
            r9.f(r4)
            int r3 = r3 + 4
            ta.a.p(r0, r9, r3)
            int r3 = r8.f14771p
            if (r3 != 0) goto L6a
            r8.L(r9)
            r1 = r2
        L6a:
            n2.d r3 = r8.f14775t
            if (r3 == 0) goto L41
            boolean r3 = r8.f14776u
            if (r3 != 0) goto L41
            r8.M(r9)
        L75:
            r10 = r2
            goto L41
        L77:
            r5 = 1700284774(0x65584966, float:6.383657E22)
            if (r4 != r5) goto L88
            if (r1 == 0) goto L88
            r8.L(r9)
            int r3 = r3 + 4
            r0.c(r3)
            r1 = r2
            goto L41
        L88:
            r5 = 1767135348(0x69545874, float:1.6044374E25)
            if (r4 != r5) goto Lba
            byte[] r5 = n2.h.J
            int r6 = r5.length
            if (r3 < r6) goto Lba
            int r6 = r5.length
            byte[] r7 = new byte[r6]
            r0.readFully(r7)
            int r6 = r3 - r6
            int r6 = r6 + 4
            boolean r5 = java.util.Arrays.equals(r7, r5)
            if (r5 == 0) goto Lad
            n2.d r10 = r8.f14775t
            if (r10 == 0) goto La9
            r8.M(r9)
        La9:
            r0.c(r6)
            goto L75
        Lad:
            r9.f(r3)
            r9.f(r4)
            r9.write(r7)
            ta.a.p(r0, r9, r6)
            goto L41
        Lba:
            r9.f(r3)
            r9.f(r4)
            int r3 = r3 + 4
            ta.a.p(r0, r9, r3)
            goto L41
        */
        throw new UnsupportedOperationException("Method not decompiled: n2.h.D(java.io.BufferedInputStream, java.io.BufferedOutputStream):void");
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:22:0x027e A[Catch: all -> 0x0246, Exception -> 0x024b, TRY_ENTER, TRY_LEAVE, TryCatch #11 {Exception -> 0x024b, all -> 0x0246, blocks: (B:22:0x027e, B:121:0x023c, B:126:0x0257), top: B:11:0x0056 }] */
    /* JADX WARN: Type inference failed for: r24v0, types: [java.io.BufferedOutputStream, java.io.OutputStream, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r24v1 */
    /* JADX WARN: Type inference failed for: r24v10, types: [java.io.ByteArrayOutputStream] */
    /* JADX WARN: Type inference failed for: r24v13 */
    /* JADX WARN: Type inference failed for: r24v14 */
    /* JADX WARN: Type inference failed for: r24v2 */
    /* JADX WARN: Type inference failed for: r24v4 */
    /* JADX WARN: Type inference failed for: r24v8 */
    /* JADX WARN: Type inference failed for: r24v9 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void E(BufferedInputStream bufferedInputStream, BufferedOutputStream bufferedOutputStream) {
        ByteArrayOutputStream byteArrayOutputStream;
        ByteArrayOutputStream byteArrayOutputStream2;
        c cVar;
        int i5;
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        int i14;
        c cVar2;
        int K2;
        ByteArrayOutputStream byteArrayOutputStream3;
        byte[] bArr;
        boolean z5;
        if (f14754v) {
            Log.d("ExifInterface", "saveWebpAttributes starting with (inputStream: " + bufferedInputStream + ", outputStream: " + ((Object) bufferedOutputStream) + ")");
        }
        ByteOrder byteOrder = ByteOrder.LITTLE_ENDIAN;
        b bVar = new b(bufferedInputStream, byteOrder);
        c cVar3 = new c(bufferedOutputStream, byteOrder);
        byte[] bArr2 = K;
        ta.a.p(bVar, cVar3, bArr2.length);
        int readInt = bVar.readInt();
        byte[] bArr3 = L;
        bVar.c(bArr3.length);
        ByteArrayOutputStream byteArrayOutputStream4 = null;
        try {
            try {
                byteArrayOutputStream = new ByteArrayOutputStream();
                try {
                    cVar = new c(byteArrayOutputStream, byteOrder);
                    i5 = this.f14771p;
                } catch (Exception e9) {
                    e = e9;
                    byteArrayOutputStream2 = byteArrayOutputStream;
                } catch (Throwable th2) {
                    th = th2;
                    byteArrayOutputStream2 = byteArrayOutputStream;
                }
            } catch (Exception e10) {
                e = e10;
            }
        } catch (Throwable th3) {
            th = th3;
        }
        try {
            try {
            } catch (Exception e11) {
                e = e11;
                byteArrayOutputStream4 = byteArrayOutputStream;
                throw new IOException("Failed to save WebP file", e);
            } catch (Throwable th4) {
                th = th4;
                byteArrayOutputStream4 = byteArrayOutputStream;
                ta.a.l(byteArrayOutputStream4);
                throw th;
            }
        } catch (Exception e12) {
            e = e12;
            byteArrayOutputStream4 = bufferedOutputStream;
            throw new IOException("Failed to save WebP file", e);
        } catch (Throwable th5) {
            th = th5;
            byteArrayOutputStream4 = bufferedOutputStream;
            ta.a.l(byteArrayOutputStream4);
            throw th;
        }
        try {
            if (i5 != 0) {
                ta.a.p(bVar, cVar, (i5 - ((bArr2.length + 4) + bArr3.length)) - 8);
                bVar.c(4);
                int readInt2 = bVar.readInt();
                if (readInt2 % 2 != 0) {
                    readInt2++;
                }
                bVar.c(readInt2);
                K2 = K(cVar);
                cVar2 = cVar3;
                i10 = readInt;
                byteArrayOutputStream3 = byteArrayOutputStream;
            } else {
                byte[] bArr4 = new byte[4];
                bVar.readFully(bArr4);
                byte[] bArr5 = O;
                boolean equals = Arrays.equals(bArr4, bArr5);
                byte[] bArr6 = Q;
                byte[] bArr7 = P;
                if (equals) {
                    int readInt3 = bVar.readInt();
                    byte[] bArr8 = new byte[readInt3 % 2 == 1 ? readInt3 + 1 : readInt3];
                    bVar.readFully(bArr8);
                    byte b10 = (byte) (bArr8[0] | 8);
                    bArr8[0] = b10;
                    boolean z6 = ((b10 >> 1) & 1) == 1;
                    cVar.write(bArr5);
                    cVar.f(readInt3);
                    cVar.write(bArr8);
                    if (z6) {
                        byte[] bArr9 = R;
                        do {
                            bArr = new byte[4];
                            bVar.readFully(bArr);
                            int readInt4 = bVar.readInt();
                            cVar.write(bArr);
                            cVar.f(readInt4);
                            if (readInt4 % 2 == 1) {
                                readInt4++;
                            }
                            ta.a.p(bVar, cVar, readInt4);
                        } while (!Arrays.equals(bArr, bArr9));
                        while (true) {
                            byte[] bArr10 = new byte[4];
                            try {
                                bVar.readFully(bArr10);
                                z5 = !Arrays.equals(bArr10, S);
                            } catch (EOFException unused) {
                                z5 = true;
                            }
                            if (z5) {
                                break;
                            }
                            int readInt5 = bVar.readInt();
                            cVar.write(bArr10);
                            cVar.f(readInt5);
                            if (readInt5 % 2 == 1) {
                                readInt5++;
                            }
                            ta.a.p(bVar, cVar, readInt5);
                        }
                        K2 = K(cVar);
                    } else {
                        while (true) {
                            byte[] bArr11 = new byte[4];
                            bVar.readFully(bArr11);
                            int readInt6 = bVar.readInt();
                            cVar.write(bArr11);
                            cVar.f(readInt6);
                            if (readInt6 % 2 == 1) {
                                readInt6++;
                            }
                            ta.a.p(bVar, cVar, readInt6);
                            if (Arrays.equals(bArr11, bArr6) || (bArr7 != null && Arrays.equals(bArr11, bArr7))) {
                                break;
                            }
                        }
                        K2 = K(cVar);
                    }
                    cVar2 = cVar3;
                    i10 = readInt;
                    byteArrayOutputStream3 = byteArrayOutputStream;
                } else {
                    if (Arrays.equals(bArr4, bArr6) || Arrays.equals(bArr4, bArr7)) {
                        int readInt7 = bVar.readInt();
                        int i15 = readInt7 % 2 == 1 ? readInt7 + 1 : readInt7;
                        boolean z7 = true;
                        byte[] bArr12 = new byte[3];
                        boolean equals2 = Arrays.equals(bArr4, bArr6);
                        i6 = -1;
                        byte[] bArr13 = N;
                        if (equals2) {
                            bVar.readFully(bArr12);
                            byte[] bArr14 = new byte[3];
                            bVar.readFully(bArr14);
                            if (!Arrays.equals(bArr13, bArr14)) {
                                throw new IOException("Error checking VP8 signature");
                            }
                            i12 = bVar.readInt();
                            i10 = readInt;
                            i15 -= 10;
                            i13 = (i12 >> 16) & 16383;
                            i11 = i12 & 16383;
                            z7 = false;
                        } else {
                            i10 = readInt;
                            if (!Arrays.equals(bArr4, bArr7)) {
                                i11 = 0;
                                i12 = 0;
                                z7 = false;
                                i13 = 0;
                            } else {
                                if (bVar.readByte() != 47) {
                                    throw new IOException("Error checking VP8L signature");
                                }
                                i12 = bVar.readInt();
                                i11 = (i12 & 16383) + 1;
                                i13 = ((i12 & 268419072) >>> 14) + 1;
                                if ((i12 & 268435456) == 0) {
                                    z7 = false;
                                }
                                i15 -= 5;
                            }
                        }
                        cVar.write(bArr5);
                        cVar.f(10);
                        byte[] bArr15 = new byte[10];
                        if (z7) {
                            i14 = i11;
                            bArr15[0] = (byte) (bArr15[0] | 16);
                        } else {
                            i14 = i11;
                        }
                        bArr15[0] = (byte) (bArr15[0] | 8);
                        int i16 = i14 - 1;
                        bufferedOutputStream = byteArrayOutputStream;
                        int i17 = i13 - 1;
                        cVar2 = cVar3;
                        try {
                            bArr15[4] = (byte) i16;
                            bArr15[5] = (byte) (i16 >> 8);
                            bArr15[6] = (byte) (i16 >> 16);
                            bArr15[7] = (byte) i17;
                            bArr15[8] = (byte) (i17 >> 8);
                            bArr15[9] = (byte) (i17 >> 16);
                            cVar.write(bArr15);
                            cVar.write(bArr4);
                            cVar.f(readInt7);
                            if (Arrays.equals(bArr4, bArr6)) {
                                cVar.write(bArr12);
                                cVar.write(bArr13);
                                cVar.f(i12);
                            } else if (Arrays.equals(bArr4, bArr7)) {
                                cVar.write(47);
                                cVar.f(i12);
                            }
                            ta.a.p(bVar, cVar, i15);
                            K2 = K(cVar);
                            bufferedOutputStream = bufferedOutputStream;
                            ta.a.p(bVar, cVar, (i10 + 8) - bVar.f14734e);
                            c cVar4 = cVar2;
                            cVar4.f(bufferedOutputStream.size() + bArr3.length);
                            cVar4.write(bArr3);
                            if (K2 != i6) {
                                this.f14771p = cVar4.f14738d.size() + K2;
                            }
                            byteArrayOutputStream2 = bufferedOutputStream;
                            byteArrayOutputStream2.writeTo(cVar4);
                            ta.a.o(bVar, cVar4);
                            ta.a.l(byteArrayOutputStream2);
                            return;
                        } catch (Exception e13) {
                            e = e13;
                            byteArrayOutputStream2 = bufferedOutputStream;
                            byteArrayOutputStream4 = byteArrayOutputStream2;
                            throw new IOException("Failed to save WebP file", e);
                        } catch (Throwable th6) {
                            th = th6;
                            byteArrayOutputStream2 = bufferedOutputStream;
                            byteArrayOutputStream4 = byteArrayOutputStream2;
                            ta.a.l(byteArrayOutputStream4);
                            throw th;
                        }
                    }
                    cVar2 = cVar3;
                    i10 = readInt;
                    byteArrayOutputStream3 = byteArrayOutputStream;
                    K2 = -1;
                }
            }
            byteArrayOutputStream2.writeTo(cVar4);
            ta.a.o(bVar, cVar4);
            ta.a.l(byteArrayOutputStream2);
            return;
        } catch (Exception e14) {
            e = e14;
            byteArrayOutputStream4 = byteArrayOutputStream2;
            throw new IOException("Failed to save WebP file", e);
        } catch (Throwable th7) {
            th = th7;
            byteArrayOutputStream4 = byteArrayOutputStream2;
            ta.a.l(byteArrayOutputStream4);
            throw th;
        }
        i6 = -1;
        bufferedOutputStream = byteArrayOutputStream3;
        ta.a.p(bVar, cVar, (i10 + 8) - bVar.f14734e);
        c cVar42 = cVar2;
        cVar42.f(bufferedOutputStream.size() + bArr3.length);
        cVar42.write(bArr3);
        if (K2 != i6) {
        }
        byteArrayOutputStream2 = bufferedOutputStream;
    }

    /* JADX WARN: Removed duplicated region for block: B:100:0x0322  */
    /* JADX WARN: Removed duplicated region for block: B:110:0x0395  */
    /* JADX WARN: Removed duplicated region for block: B:120:0x03dd  */
    /* JADX WARN: Removed duplicated region for block: B:127:0x041f  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x0447  */
    /* JADX WARN: Removed duplicated region for block: B:141:0x046f  */
    /* JADX WARN: Removed duplicated region for block: B:143:0x047d  */
    /* JADX WARN: Removed duplicated region for block: B:88:0x02d8  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x02e1  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void F(String str, String str2) {
        String str3;
        boolean z5;
        String str4;
        e eVar;
        int i5;
        String str5;
        String str6;
        f fVar;
        long j;
        long j5;
        String str7 = str2;
        boolean equals = "ISOSpeedRatings".equals(str);
        boolean z6 = f14754v;
        if (equals) {
            if (z6) {
                Log.d("ExifInterface", "setAttribute: Replacing TAG_ISO_SPEED_RATINGS with TAG_PHOTOGRAPHIC_SENSITIVITY.");
            }
            str3 = "PhotographicSensitivity";
        } else {
            str3 = str;
        }
        String str8 = "/";
        if (str7 == null) {
            z5 = z6;
            str4 = "/";
        } else if (!f14747b0.contains(str3) || str7.contains("/")) {
            z5 = z6;
            str4 = "/";
            if (str3.equals("GPSTimeStamp")) {
                Matcher matcher = f14752g0.matcher(str7);
                if (!matcher.find()) {
                    Log.w("ExifInterface", "Invalid value for " + str3 + " : " + str7);
                    return;
                }
                str7 = Integer.parseInt(matcher.group(1)) + "/1," + Integer.parseInt(matcher.group(2)) + "/1," + Integer.parseInt(matcher.group(3)) + "/1";
            } else if ("DateTime".equals(str3) || "DateTimeOriginal".equals(str3) || "DateTimeDigitized".equals(str3)) {
                boolean find = h0.matcher(str7).find();
                boolean find2 = f14753i0.matcher(str7).find();
                if (str7.length() != 19 || (!find && !find2)) {
                    Log.w("ExifInterface", "Invalid value for " + str3 + " : " + str7);
                    return;
                }
                if (find2) {
                    str7 = str7.replaceAll("-", ":");
                }
            }
        } else {
            try {
                double parseDouble = Double.parseDouble(str7);
                long j7 = 1;
                if (parseDouble >= 9.223372036854776E18d || parseDouble <= -9.223372036854776E18d) {
                    z5 = z6;
                    str4 = "/";
                    fVar = new f(parseDouble > 0.0d ? LongCompanionObject.MAX_VALUE : Long.MIN_VALUE, 1L);
                } else {
                    double abs = Math.abs(parseDouble);
                    long j10 = 0;
                    long j11 = 1;
                    double d6 = abs;
                    long j12 = 0;
                    while (true) {
                        double d7 = d6 % 1.0d;
                        long j13 = (long) (d6 - d7);
                        str4 = str8;
                        j = (j13 * j7) + j12;
                        j5 = (j13 * j10) + j11;
                        d6 = 1.0d / d7;
                        z5 = z6;
                        if (Math.abs(abs - (j / j5)) <= 1.0E-8d * abs) {
                            break;
                        }
                        z6 = z5;
                        j11 = j10;
                        j10 = j5;
                        j12 = j7;
                        j7 = j;
                        str8 = str4;
                    }
                    if (parseDouble < 0.0d) {
                        j = -j;
                    }
                    fVar = new f(j, j5);
                }
                str7 = fVar.toString();
            } catch (NumberFormatException unused) {
                Log.w("ExifInterface", "Invalid value for " + str3 + " : " + str7);
                return;
            }
        }
        boolean equals2 = "Xmp".equals(str3);
        int i6 = 12;
        int i10 = 9;
        int i11 = 4;
        HashMap[] hashMapArr = this.f14763f;
        int i12 = 0;
        if (equals2) {
            boolean z7 = hashMapArr[0].containsKey("Xmp") || hashMapArr[5].containsKey("Xmp");
            int i13 = this.f14761d;
            char c6 = i13 != 4 ? (i13 == 9 || i13 == 15 || i13 == 12 || i13 == 13) ? (char) 2 : (char) 1 : (char) 3;
            if ((c6 == 2 && (this.f14775t != null || !z7)) || (c6 == 3 && !z7)) {
                this.f14775t = str7 != null ? d.a(str7) : null;
                return;
            }
        }
        int i14 = 0;
        while (i14 < X.length) {
            if ((i14 != i11 || this.f14766i) && (eVar = (e) a0[i14].get(str3)) != null) {
                int i15 = eVar.f14745d;
                int i16 = eVar.f14744c;
                if (str7 == null) {
                    hashMapArr[i14].remove(str3);
                } else {
                    Pair p3 = p(str7);
                    int i17 = -1;
                    if (i16 != ((Integer) p3.first).intValue() && i16 != ((Integer) p3.second).intValue()) {
                        if (i15 != -1 && (i15 == ((Integer) p3.first).intValue() || i15 == ((Integer) p3.second).intValue())) {
                            i5 = i12;
                            int[] iArr = U;
                            switch (i15) {
                            }
                            i14++;
                            i12 = i5;
                            str4 = str5;
                            i6 = 12;
                            i10 = 9;
                            i11 = 4;
                        } else if (i16 != 1 && i16 != 7) {
                            if (i16 == 2) {
                                i5 = i12;
                                i15 = i16;
                                int[] iArr2 = U;
                                switch (i15) {
                                    case 1:
                                        str5 = str4;
                                        hashMapArr[i14].put(str3, d.a(str7));
                                        break;
                                    case 2:
                                    case 7:
                                        str5 = str4;
                                        hashMapArr[i14].put(str3, d.b(str7));
                                        break;
                                    case 3:
                                        str5 = str4;
                                        String[] split = str7.split(",", -1);
                                        int[] iArr3 = new int[split.length];
                                        for (int i18 = i5; i18 < split.length; i18++) {
                                            iArr3[i18] = Integer.parseInt(split[i18]);
                                        }
                                        hashMapArr[i14].put(str3, d.g(iArr3, this.f14765h));
                                        break;
                                    case 4:
                                        str5 = str4;
                                        String[] split2 = str7.split(",", -1);
                                        long[] jArr = new long[split2.length];
                                        for (int i19 = i5; i19 < split2.length; i19++) {
                                            jArr[i19] = Long.parseLong(split2[i19]);
                                        }
                                        hashMapArr[i14].put(str3, d.d(jArr, this.f14765h));
                                        break;
                                    case 5:
                                        int i20 = -1;
                                        str5 = str4;
                                        String[] split3 = str7.split(",", -1);
                                        f[] fVarArr = new f[split3.length];
                                        int i21 = i5;
                                        while (i21 < split3.length) {
                                            String[] split4 = split3[i21].split(str5, i20);
                                            fVarArr[i21] = new f((long) Double.parseDouble(split4[i5]), (long) Double.parseDouble(split4[1]));
                                            i21++;
                                            i20 = -1;
                                        }
                                        hashMapArr[i14].put(str3, d.e(fVarArr, this.f14765h));
                                        break;
                                    case 6:
                                    case 8:
                                    case 11:
                                    default:
                                        if (z5) {
                                            k0.d.q(i15, "Data format isn't one of expected formats: ", "ExifInterface");
                                        }
                                        str5 = str4;
                                        break;
                                    case 9:
                                        int i22 = i10;
                                        str5 = str4;
                                        String[] split5 = str7.split(",", -1);
                                        int length = split5.length;
                                        int[] iArr4 = new int[length];
                                        for (int i23 = i5; i23 < split5.length; i23++) {
                                            iArr4[i23] = Integer.parseInt(split5[i23]);
                                        }
                                        HashMap hashMap = hashMapArr[i14];
                                        ByteOrder byteOrder = this.f14765h;
                                        ByteBuffer wrap = ByteBuffer.wrap(new byte[iArr2[i22] * length]);
                                        wrap.order(byteOrder);
                                        for (int i24 = i5; i24 < length; i24++) {
                                            wrap.putInt(iArr4[i24]);
                                        }
                                        hashMap.put(str3, new d(wrap.array(), i22, length));
                                        break;
                                    case 10:
                                        String[] split6 = str7.split(",", -1);
                                        int length2 = split6.length;
                                        f[] fVarArr2 = new f[length2];
                                        int i25 = i5;
                                        while (i25 < split6.length) {
                                            String[] split7 = split6[i25].split(str4, i17);
                                            fVarArr2[i25] = new f((long) Double.parseDouble(split7[i5]), (long) Double.parseDouble(split7[1]));
                                            i25++;
                                            i10 = i10;
                                            split6 = split6;
                                            i17 = -1;
                                        }
                                        str5 = str4;
                                        HashMap hashMap2 = hashMapArr[i14];
                                        ByteOrder byteOrder2 = this.f14765h;
                                        ByteBuffer wrap2 = ByteBuffer.wrap(new byte[iArr2[10] * length2]);
                                        wrap2.order(byteOrder2);
                                        for (int i26 = i5; i26 < length2; i26++) {
                                            f fVar2 = fVarArr2[i26];
                                            wrap2.putInt((int) fVar2.a);
                                            wrap2.putInt((int) fVar2.f14746b);
                                        }
                                        hashMap2.put(str3, new d(wrap2.array(), 10, length2));
                                        break;
                                    case 12:
                                        String[] split8 = str7.split(",", -1);
                                        int length3 = split8.length;
                                        double[] dArr = new double[length3];
                                        for (int i27 = i5; i27 < split8.length; i27++) {
                                            dArr[i27] = Double.parseDouble(split8[i27]);
                                        }
                                        HashMap hashMap3 = hashMapArr[i14];
                                        ByteOrder byteOrder3 = this.f14765h;
                                        ByteBuffer wrap3 = ByteBuffer.wrap(new byte[iArr2[i6] * length3]);
                                        wrap3.order(byteOrder3);
                                        for (int i28 = i5; i28 < length3; i28++) {
                                            wrap3.putDouble(dArr[i28]);
                                        }
                                        hashMap3.put(str3, new d(wrap3.array(), i6, length3));
                                        str5 = str4;
                                        break;
                                }
                                i14++;
                                i12 = i5;
                                str4 = str5;
                                i6 = 12;
                                i10 = 9;
                                i11 = 4;
                            } else if (z5) {
                                StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Given tag (", str3, ") value didn't match with one of expected formats: ");
                                String[] strArr = T;
                                m5.append(strArr[i16]);
                                if (i15 == -1) {
                                    i5 = i12;
                                    str6 = "";
                                } else {
                                    i5 = i12;
                                    str6 = ", " + strArr[i15];
                                }
                                m5.append(str6);
                                m5.append(" (guess: ");
                                m5.append(strArr[((Integer) p3.first).intValue()]);
                                m5.append(((Integer) p3.second).intValue() != -1 ? ", " + strArr[((Integer) p3.second).intValue()] : "");
                                m5.append(")");
                                Log.d("ExifInterface", m5.toString());
                                str5 = str4;
                                i14++;
                                i12 = i5;
                                str4 = str5;
                                i6 = 12;
                                i10 = 9;
                                i11 = 4;
                            }
                        }
                    }
                    i5 = i12;
                    i15 = i16;
                    int[] iArr22 = U;
                    switch (i15) {
                    }
                    i14++;
                    i12 = i5;
                    str4 = str5;
                    i6 = 12;
                    i10 = 9;
                    i11 = 4;
                }
            }
            i5 = i12;
            str5 = str4;
            i14++;
            i12 = i5;
            str4 = str5;
            i6 = 12;
            i10 = 9;
            i11 = 4;
        }
    }

    public final void G(b bVar) {
        String str;
        d dVar;
        int i5;
        HashMap hashMap = this.f14763f[4];
        d dVar2 = (d) hashMap.get("Compression");
        if (dVar2 == null) {
            this.f14770o = 6;
            q(bVar, hashMap);
            return;
        }
        int i6 = dVar2.i(this.f14765h);
        this.f14770o = i6;
        int i10 = 1;
        if (i6 != 1) {
            if (i6 == 6) {
                q(bVar, hashMap);
                return;
            } else if (i6 != 7) {
                return;
            }
        }
        d dVar3 = (d) hashMap.get("BitsPerSample");
        String str2 = "ExifInterface";
        if (dVar3 != null) {
            int[] iArr = (int[]) dVar3.k(this.f14765h);
            int[] iArr2 = f14757y;
            if (Arrays.equals(iArr2, iArr) || (this.f14761d == 3 && (dVar = (d) hashMap.get("PhotometricInterpretation")) != null && (((i5 = dVar.i(this.f14765h)) == 1 && Arrays.equals(iArr, f14758z)) || (i5 == 6 && Arrays.equals(iArr, iArr2))))) {
                d dVar4 = (d) hashMap.get("StripOffsets");
                d dVar5 = (d) hashMap.get("StripByteCounts");
                if (dVar4 == null || dVar5 == null) {
                    return;
                }
                long[] n6 = ta.a.n(dVar4.k(this.f14765h));
                long[] n10 = ta.a.n(dVar5.k(this.f14765h));
                if (n6 == null || n6.length == 0) {
                    Log.w("ExifInterface", "stripOffsets should not be null or have zero length.");
                    return;
                }
                if (n10 == null || n10.length == 0) {
                    Log.w("ExifInterface", "stripByteCounts should not be null or have zero length.");
                    return;
                }
                if (n6.length != n10.length) {
                    Log.w("ExifInterface", "stripOffsets and stripByteCounts should have same length.");
                    return;
                }
                long j = 0;
                for (long j5 : n10) {
                    j += j5;
                }
                int i11 = (int) j;
                byte[] bArr = new byte[i11];
                this.k = true;
                this.j = true;
                this.f14766i = true;
                int i12 = 0;
                int i13 = 0;
                int i14 = 0;
                while (i12 < n6.length) {
                    int i15 = (int) n6[i12];
                    int i16 = (int) n10[i12];
                    if (i12 < n6.length - i10) {
                        str = str2;
                        if (i15 + i16 != n6[i12 + 1]) {
                            this.k = false;
                        }
                    } else {
                        str = str2;
                    }
                    int i17 = i15 - i13;
                    if (i17 < 0) {
                        Log.d(str, "Invalid strip offset value");
                        return;
                    }
                    String str3 = str;
                    try {
                        bVar.c(i17);
                        int i18 = i13 + i17;
                        byte[] bArr2 = new byte[i16];
                        try {
                            bVar.readFully(bArr2);
                            i13 = i18 + i16;
                            System.arraycopy(bArr2, 0, bArr, i14, i16);
                            i14 += i16;
                            i12++;
                            str2 = str3;
                            i10 = 1;
                        } catch (EOFException unused) {
                            Log.d(str3, "Failed to read " + i16 + " bytes.");
                            return;
                        }
                    } catch (EOFException unused2) {
                        Log.d(str3, "Failed to skip " + i17 + " bytes.");
                        return;
                    }
                }
                this.f14769n = bArr;
                if (this.k) {
                    this.f14767l = (int) n6[0];
                    this.f14768m = i11;
                    return;
                }
                return;
            }
        }
        if (f14754v) {
            Log.d("ExifInterface", "Unsupported data type value");
        }
    }

    public final void H(int i5, int i6) {
        HashMap[] hashMapArr = this.f14763f;
        boolean isEmpty = hashMapArr[i5].isEmpty();
        boolean z5 = f14754v;
        if (isEmpty || hashMapArr[i6].isEmpty()) {
            if (z5) {
                Log.d("ExifInterface", "Cannot perform swap since only one image data exists");
                return;
            }
            return;
        }
        d dVar = (d) hashMapArr[i5].get("ImageLength");
        d dVar2 = (d) hashMapArr[i5].get("ImageWidth");
        d dVar3 = (d) hashMapArr[i6].get("ImageLength");
        d dVar4 = (d) hashMapArr[i6].get("ImageWidth");
        if (dVar == null || dVar2 == null) {
            if (z5) {
                Log.d("ExifInterface", "First image does not contain valid size information");
                return;
            }
            return;
        }
        if (dVar3 == null || dVar4 == null) {
            if (z5) {
                Log.d("ExifInterface", "Second image does not contain valid size information");
                return;
            }
            return;
        }
        int i10 = dVar.i(this.f14765h);
        int i11 = dVar2.i(this.f14765h);
        int i12 = dVar3.i(this.f14765h);
        int i13 = dVar4.i(this.f14765h);
        if (i10 >= i12 || i11 >= i13) {
            return;
        }
        HashMap hashMap = hashMapArr[i5];
        hashMapArr[i5] = hashMapArr[i6];
        hashMapArr[i6] = hashMap;
    }

    public final void I(g gVar, int i5) {
        d f2;
        d f10;
        HashMap[] hashMapArr = this.f14763f;
        d dVar = (d) hashMapArr[i5].get("DefaultCropSize");
        d dVar2 = (d) hashMapArr[i5].get("SensorTopBorder");
        d dVar3 = (d) hashMapArr[i5].get("SensorLeftBorder");
        d dVar4 = (d) hashMapArr[i5].get("SensorBottomBorder");
        d dVar5 = (d) hashMapArr[i5].get("SensorRightBorder");
        if (dVar != null) {
            if (dVar.a == 5) {
                f[] fVarArr = (f[]) dVar.k(this.f14765h);
                if (fVarArr == null || fVarArr.length != 2) {
                    Log.w("ExifInterface", "Invalid crop size values. cropSize=" + Arrays.toString(fVarArr));
                    return;
                } else {
                    f2 = d.e(new f[]{fVarArr[0]}, this.f14765h);
                    f10 = d.e(new f[]{fVarArr[1]}, this.f14765h);
                }
            } else {
                int[] iArr = (int[]) dVar.k(this.f14765h);
                if (iArr == null || iArr.length != 2) {
                    Log.w("ExifInterface", "Invalid crop size values. cropSize=" + Arrays.toString(iArr));
                    return;
                }
                f2 = d.f(iArr[0], this.f14765h);
                f10 = d.f(iArr[1], this.f14765h);
            }
            hashMapArr[i5].put("ImageWidth", f2);
            hashMapArr[i5].put("ImageLength", f10);
            return;
        }
        if (dVar2 != null && dVar3 != null && dVar4 != null && dVar5 != null) {
            int i6 = dVar2.i(this.f14765h);
            int i10 = dVar4.i(this.f14765h);
            int i11 = dVar5.i(this.f14765h);
            int i12 = dVar3.i(this.f14765h);
            if (i10 <= i6 || i11 <= i12) {
                return;
            }
            d f11 = d.f(i10 - i6, this.f14765h);
            d f12 = d.f(i11 - i12, this.f14765h);
            hashMapArr[i5].put("ImageLength", f11);
            hashMapArr[i5].put("ImageWidth", f12);
            return;
        }
        d dVar6 = (d) hashMapArr[i5].get("ImageLength");
        d dVar7 = (d) hashMapArr[i5].get("ImageWidth");
        if (dVar6 == null || dVar7 == null) {
            d dVar8 = (d) hashMapArr[i5].get("JPEGInterchangeFormat");
            d dVar9 = (d) hashMapArr[i5].get("JPEGInterchangeFormatLength");
            if (dVar8 == null || dVar9 == null) {
                return;
            }
            int i13 = dVar8.i(this.f14765h);
            int i14 = dVar8.i(this.f14765h);
            gVar.f(i13);
            byte[] bArr = new byte[i14];
            gVar.readFully(bArr);
            f(new b(bArr), i13, i5);
        }
    }

    public final void J() {
        H(0, 5);
        H(0, 4);
        H(5, 4);
        HashMap[] hashMapArr = this.f14763f;
        d dVar = (d) hashMapArr[1].get("PixelXDimension");
        d dVar2 = (d) hashMapArr[1].get("PixelYDimension");
        if (dVar != null && dVar2 != null) {
            hashMapArr[0].put("ImageWidth", dVar);
            hashMapArr[0].put("ImageLength", dVar2);
        }
        if (hashMapArr[4].isEmpty() && s(hashMapArr[5])) {
            hashMapArr[4] = hashMapArr[5];
            hashMapArr[5] = new HashMap();
        }
        if (!s(hashMapArr[4])) {
            Log.d("ExifInterface", "No image meets the size requirements of a thumbnail image.");
        }
        A(0, "ThumbnailOrientation", "Orientation");
        A(0, "ThumbnailImageLength", "ImageLength");
        A(0, "ThumbnailImageWidth", "ImageWidth");
        A(5, "ThumbnailOrientation", "Orientation");
        A(5, "ThumbnailImageLength", "ImageLength");
        A(5, "ThumbnailImageWidth", "ImageWidth");
        A(4, "Orientation", "ThumbnailOrientation");
        A(4, "ImageLength", "ThumbnailImageLength");
        A(4, "ImageWidth", "ThumbnailImageWidth");
    }

    public final int K(c cVar) {
        HashMap[] hashMapArr;
        int i5;
        int i6;
        char c6;
        char c8;
        int[] iArr;
        int i10;
        e[][] eVarArr = X;
        int[] iArr2 = new int[eVarArr.length];
        int[] iArr3 = new int[eVarArr.length];
        e[] eVarArr2 = Y;
        for (e eVar : eVarArr2) {
            z(eVar.f14743b);
        }
        if (this.f14766i) {
            if (this.j) {
                z("StripOffsets");
                z("StripByteCounts");
            } else {
                z("JPEGInterchangeFormat");
                z("JPEGInterchangeFormatLength");
            }
        }
        int i11 = 0;
        while (true) {
            int length = eVarArr.length;
            hashMapArr = this.f14763f;
            if (i11 >= length) {
                break;
            }
            Iterator it = hashMapArr[i11].entrySet().iterator();
            while (it.hasNext()) {
                if (((Map.Entry) it.next()).getValue() == null) {
                    it.remove();
                }
            }
            i11++;
        }
        if (hashMapArr[1].isEmpty()) {
            i5 = 1;
            i6 = 0;
        } else {
            i5 = 1;
            i6 = 0;
            hashMapArr[0].put(eVarArr2[1].f14743b, d.c(0L, this.f14765h));
        }
        if (hashMapArr[2].isEmpty()) {
            c6 = 2;
        } else {
            c6 = 2;
            hashMapArr[i6].put(eVarArr2[2].f14743b, d.c(0L, this.f14765h));
        }
        if (hashMapArr[3].isEmpty()) {
            c8 = 3;
        } else {
            c8 = 3;
            hashMapArr[i5].put(eVarArr2[3].f14743b, d.c(0L, this.f14765h));
        }
        int i12 = 4;
        if (this.f14766i) {
            if (this.j) {
                hashMapArr[4].put("StripOffsets", d.f(i6, this.f14765h));
                hashMapArr[4].put("StripByteCounts", d.f(this.f14768m, this.f14765h));
            } else {
                hashMapArr[4].put("JPEGInterchangeFormat", d.c(0L, this.f14765h));
                hashMapArr[4].put("JPEGInterchangeFormatLength", d.c(this.f14768m, this.f14765h));
            }
        }
        int i13 = 0;
        while (true) {
            int length2 = eVarArr.length;
            iArr = U;
            if (i13 >= length2) {
                break;
            }
            Iterator it2 = hashMapArr[i13].entrySet().iterator();
            int i14 = 0;
            while (it2.hasNext()) {
                d dVar = (d) ((Map.Entry) it2.next()).getValue();
                dVar.getClass();
                int i15 = iArr[dVar.a] * dVar.f14740b;
                if (i15 > 4) {
                    i14 += i15;
                }
            }
            iArr3[i13] = iArr3[i13] + i14;
            i13++;
        }
        int i16 = 8;
        for (int i17 = 0; i17 < eVarArr.length; i17++) {
            if (!hashMapArr[i17].isEmpty()) {
                iArr2[i17] = i16;
                i16 = (hashMapArr[i17].size() * 12) + 6 + iArr3[i17] + i16;
            }
        }
        if (this.f14766i) {
            if (this.j) {
                hashMapArr[4].put("StripOffsets", d.f(i16, this.f14765h));
            } else {
                hashMapArr[4].put("JPEGInterchangeFormat", d.c(i16, this.f14765h));
            }
            this.f14767l = i16;
            i16 += this.f14768m;
        }
        if (this.f14761d == 4) {
            i16 += 8;
        }
        if (f14754v) {
            for (int i18 = 0; i18 < eVarArr.length; i18++) {
                Log.d("ExifInterface", String.format("index: %d, offsets: %d, tag count: %d, data sizes: %d, total size: %d", Integer.valueOf(i18), Integer.valueOf(iArr2[i18]), Integer.valueOf(hashMapArr[i18].size()), Integer.valueOf(iArr3[i18]), Integer.valueOf(i16)));
            }
        }
        if (!hashMapArr[i5].isEmpty()) {
            hashMapArr[0].put(eVarArr2[i5].f14743b, d.c(iArr2[i5], this.f14765h));
        }
        if (!hashMapArr[c6].isEmpty()) {
            hashMapArr[0].put(eVarArr2[c6].f14743b, d.c(iArr2[c6], this.f14765h));
        }
        if (!hashMapArr[c8].isEmpty()) {
            hashMapArr[i5].put(eVarArr2[c8].f14743b, d.c(iArr2[c8], this.f14765h));
        }
        int i19 = this.f14761d;
        if (i19 == 4) {
            if (i16 > 65535) {
                throw new IllegalStateException(s4.h.e(i16, "Size of exif data (", " bytes) exceeds the max size of a JPEG APP1 segment (65536 bytes)"));
            }
            cVar.l(i16);
            cVar.write(f14750e0);
        } else if (i19 == 13) {
            cVar.f(i16);
            cVar.f(1700284774);
        } else if (i19 == 14) {
            cVar.write(M);
            cVar.f(i16);
        }
        int size = cVar.f14738d.size();
        cVar.g(this.f14765h == ByteOrder.BIG_ENDIAN ? (short) 19789 : (short) 18761);
        cVar.f14739e = this.f14765h;
        cVar.l(42);
        cVar.i(8L);
        int i20 = 0;
        while (i20 < eVarArr.length) {
            if (hashMapArr[i20].isEmpty()) {
                i10 = i12;
            } else {
                cVar.l(hashMapArr[i20].size());
                int size2 = (hashMapArr[i20].size() * 12) + iArr2[i20] + 2 + i12;
                for (Map.Entry entry : hashMapArr[i20].entrySet()) {
                    int i21 = ((e) a0[i20].get(entry.getKey())).a;
                    d dVar2 = (d) entry.getValue();
                    dVar2.getClass();
                    int i22 = dVar2.f14740b;
                    int i23 = dVar2.a;
                    int i24 = iArr[i23] * i22;
                    cVar.l(i21);
                    cVar.l(i23);
                    cVar.f(i22);
                    if (i24 > 4) {
                        cVar.i(size2);
                        size2 += i24;
                    } else {
                        cVar.write(dVar2.f14742d);
                        if (i24 < 4) {
                            while (i24 < 4) {
                                cVar.c(0);
                                i24++;
                            }
                        }
                    }
                    i12 = 4;
                }
                int i25 = i12;
                if (i20 != 0 || hashMapArr[i25].isEmpty()) {
                    cVar.i(0L);
                } else {
                    cVar.i(iArr2[i25]);
                }
                Iterator it3 = hashMapArr[i20].entrySet().iterator();
                while (it3.hasNext()) {
                    byte[] bArr = ((d) ((Map.Entry) it3.next()).getValue()).f14742d;
                    if (bArr.length > 4) {
                        cVar.write(bArr, 0, bArr.length);
                    }
                }
                i10 = 4;
            }
            i20++;
            i12 = i10;
        }
        if (this.f14766i) {
            cVar.write(n());
        }
        if (this.f14761d == 14 && i16 % 2 == i5) {
            cVar.c(0);
        }
        cVar.f14739e = ByteOrder.BIG_ENDIAN;
        return size;
    }

    public final void L(c cVar) {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        this.f14771p = cVar.f14738d.size() + K(new c(byteArrayOutputStream, ByteOrder.BIG_ENDIAN));
        byte[] byteArray = byteArrayOutputStream.toByteArray();
        cVar.write(byteArray);
        CRC32 crc32 = new CRC32();
        crc32.update(byteArray, 4, byteArray.length - 4);
        cVar.f((int) crc32.getValue());
    }

    public final void M(c cVar) {
        cVar.f(this.f14775t.f14742d.length + 22);
        CRC32 crc32 = new CRC32();
        cVar.f(1767135348);
        crc32.update(105);
        crc32.update(26964);
        crc32.update(6902872);
        crc32.update(1767135348);
        byte[] bArr = J;
        cVar.write(bArr);
        crc32.update(bArr);
        cVar.write(this.f14775t.f14742d);
        crc32.update(this.f14775t.f14742d);
        cVar.f((int) crc32.getValue());
        this.f14776u = true;
    }

    public final void a() {
        String b10 = b("DateTimeOriginal");
        HashMap[] hashMapArr = this.f14763f;
        if (b10 != null && b("DateTime") == null) {
            hashMapArr[0].put("DateTime", d.b(b10));
        }
        if (b("ImageWidth") == null) {
            hashMapArr[0].put("ImageWidth", d.c(0L, this.f14765h));
        }
        if (b("ImageLength") == null) {
            hashMapArr[0].put("ImageLength", d.c(0L, this.f14765h));
        }
        if (b("Orientation") == null) {
            hashMapArr[0].put("Orientation", d.c(0L, this.f14765h));
        }
        if (b("LightSource") == null) {
            hashMapArr[1].put("LightSource", d.c(0L, this.f14765h));
        }
    }

    public final String b(String str) {
        if (str == null) {
            throw new NullPointerException("tag shouldn't be null");
        }
        d d6 = d(str);
        if (d6 != null) {
            int i5 = d6.a;
            if (str.equals("GPSTimeStamp")) {
                if (i5 != 5 && i5 != 10) {
                    Log.w("ExifInterface", "GPS Timestamp format is not rational. format=" + i5);
                    return null;
                }
                f[] fVarArr = (f[]) d6.k(this.f14765h);
                if (fVarArr == null || fVarArr.length != 3) {
                    Log.w("ExifInterface", "Invalid GPS Timestamp array. array=" + Arrays.toString(fVarArr));
                    return null;
                }
                f fVar = fVarArr[0];
                Integer valueOf = Integer.valueOf((int) (fVar.a / fVar.f14746b));
                f fVar2 = fVarArr[1];
                Integer valueOf2 = Integer.valueOf((int) (fVar2.a / fVar2.f14746b));
                f fVar3 = fVarArr[2];
                return String.format("%02d:%02d:%02d", valueOf, valueOf2, Integer.valueOf((int) (fVar3.a / fVar3.f14746b)));
            }
            if (!f14747b0.contains(str)) {
                return d6.j(this.f14765h);
            }
            try {
                return Double.toString(d6.h(this.f14765h));
            } catch (NumberFormatException unused) {
            }
        }
        return null;
    }

    public final int c() {
        d d6 = d("Orientation");
        if (d6 == null) {
            return 1;
        }
        try {
            return d6.i(this.f14765h);
        } catch (NumberFormatException unused) {
            return 1;
        }
    }

    public final d d(String str) {
        d dVar;
        int i5;
        d dVar2;
        if (str == null) {
            throw new NullPointerException("tag shouldn't be null");
        }
        if ("ISOSpeedRatings".equals(str)) {
            if (f14754v) {
                Log.d("ExifInterface", "getExifAttribute: Replacing TAG_ISO_SPEED_RATINGS with TAG_PHOTOGRAPHIC_SENSITIVITY.");
            }
            str = "PhotographicSensitivity";
        }
        if ("Xmp".equals(str) && (i5 = this.f14761d) != 4 && ((i5 == 9 || i5 == 15 || i5 == 12 || i5 == 13) && (dVar2 = this.f14775t) != null)) {
            return dVar2;
        }
        for (int i6 = 0; i6 < X.length; i6++) {
            d dVar3 = (d) this.f14763f[i6].get(str);
            if (dVar3 != null) {
                return dVar3;
            }
        }
        if (!"Xmp".equals(str) || (dVar = this.f14775t) == null) {
            return null;
        }
        return dVar;
    }

    public final void e(g gVar, int i5) {
        String str;
        String str2;
        String str3;
        int i6 = Build.VERSION.SDK_INT;
        if (i6 < 28) {
            throw new UnsupportedOperationException("Reading EXIF from HEIC files is supported from SDK 28 and above");
        }
        if (i5 == 15 && i6 < 31) {
            throw new UnsupportedOperationException("Reading EXIF from AVIF files is supported from SDK 31 and above");
        }
        MediaMetadataRetriever mediaMetadataRetriever = new MediaMetadataRetriever();
        try {
            try {
                mediaMetadataRetriever.setDataSource(new a(gVar));
                String extractMetadata = mediaMetadataRetriever.extractMetadata(33);
                String extractMetadata2 = mediaMetadataRetriever.extractMetadata(34);
                String extractMetadata3 = mediaMetadataRetriever.extractMetadata(26);
                String extractMetadata4 = mediaMetadataRetriever.extractMetadata(17);
                if ("yes".equals(extractMetadata3)) {
                    str = mediaMetadataRetriever.extractMetadata(29);
                    str3 = mediaMetadataRetriever.extractMetadata(30);
                    str2 = mediaMetadataRetriever.extractMetadata(31);
                } else if ("yes".equals(extractMetadata4)) {
                    str = mediaMetadataRetriever.extractMetadata(18);
                    str3 = mediaMetadataRetriever.extractMetadata(19);
                    str2 = mediaMetadataRetriever.extractMetadata(24);
                } else {
                    str = null;
                    str2 = null;
                    str3 = null;
                }
                HashMap[] hashMapArr = this.f14763f;
                if (str != null) {
                    hashMapArr[0].put("ImageWidth", d.f(Integer.parseInt(str), this.f14765h));
                }
                if (str3 != null) {
                    hashMapArr[0].put("ImageLength", d.f(Integer.parseInt(str3), this.f14765h));
                }
                if (str2 != null) {
                    int parseInt = Integer.parseInt(str2);
                    hashMapArr[0].put("Orientation", d.f(parseInt != 90 ? parseInt != 180 ? parseInt != 270 ? 1 : 8 : 3 : 6, this.f14765h));
                }
                if (extractMetadata != null && extractMetadata2 != null) {
                    int parseInt2 = Integer.parseInt(extractMetadata);
                    int parseInt3 = Integer.parseInt(extractMetadata2);
                    if (parseInt3 <= 6) {
                        throw new IOException("Invalid exif length");
                    }
                    gVar.f(parseInt2);
                    byte[] bArr = new byte[6];
                    gVar.readFully(bArr);
                    int i10 = parseInt2 + 6;
                    int i11 = parseInt3 - 6;
                    if (!Arrays.equals(bArr, f14750e0)) {
                        throw new IOException("Invalid identifier");
                    }
                    byte[] bArr2 = new byte[i11];
                    gVar.readFully(bArr2);
                    this.f14771p = i10;
                    x(bArr2, 0);
                }
                String extractMetadata5 = mediaMetadataRetriever.extractMetadata(41);
                String extractMetadata6 = mediaMetadataRetriever.extractMetadata(42);
                if (extractMetadata5 != null && extractMetadata6 != null) {
                    int parseInt4 = Integer.parseInt(extractMetadata5);
                    int parseInt5 = Integer.parseInt(extractMetadata6);
                    long j = parseInt4;
                    gVar.f(j);
                    byte[] bArr3 = new byte[parseInt5];
                    gVar.readFully(bArr3);
                    this.f14775t = new d(j, bArr3, 1, parseInt5);
                    this.f14776u = true;
                }
                if (f14754v) {
                    Log.d("ExifInterface", "Heif meta: " + str + "x" + str3 + ", rotation " + str2);
                }
                try {
                    mediaMetadataRetriever.release();
                } catch (IOException unused) {
                }
            } catch (RuntimeException e9) {
                throw new UnsupportedOperationException("Failed to read EXIF from HEIF file. Given stream is either malformed or unsupported.", e9);
            }
        } catch (Throwable th2) {
            try {
                mediaMetadataRetriever.release();
            } catch (IOException unused2) {
            }
            throw th2;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:62:0x0160, code lost:
    
        r22.f14735i = r21.f14765h;
     */
    /* JADX WARN: Code restructure failed: missing block: B:63:0x0164, code lost:
    
        return;
     */
    /* JADX WARN: Failed to find 'out' block for switch in B:27:0x009d. Please report as an issue. */
    /* JADX WARN: Failed to find 'out' block for switch in B:28:0x00a0. Please report as an issue. */
    /* JADX WARN: Failed to find 'out' block for switch in B:29:0x00a3. Please report as an issue. */
    /* JADX WARN: Removed duplicated region for block: B:32:0x014d A[LOOP:0: B:9:0x0033->B:32:0x014d, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0154 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:37:0x00ab A[FALL_THROUGH] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void f(b bVar, int i5, int i6) {
        int i10;
        boolean z5 = f14754v;
        if (z5) {
            Log.d("ExifInterface", "getJpegAttributes starting with: " + bVar);
        }
        bVar.f14735i = ByteOrder.BIG_ENDIAN;
        byte readByte = bVar.readByte();
        byte b10 = -1;
        if (readByte != -1) {
            throw new IOException("Invalid marker: " + Integer.toHexString(readByte & 255));
        }
        if (bVar.readByte() != -40) {
            throw new IOException("Invalid marker: " + Integer.toHexString(readByte & 255));
        }
        int i11 = 2;
        while (true) {
            byte readByte2 = bVar.readByte();
            if (readByte2 != b10) {
                throw new IOException("Invalid marker:" + Integer.toHexString(readByte2 & 255));
            }
            byte readByte3 = bVar.readByte();
            if (z5) {
                Log.d("ExifInterface", "Found JPEG segment indicator: " + Integer.toHexString(readByte3 & 255));
            }
            if (readByte3 != -39 && readByte3 != -38) {
                int readUnsignedShort = bVar.readUnsignedShort();
                int i12 = readUnsignedShort - 2;
                int i13 = i11 + 4;
                if (z5) {
                    Log.d("ExifInterface", "JPEG segment: " + Integer.toHexString(readByte3 & 255) + " (length: " + readUnsignedShort + ")");
                }
                if (i12 < 0) {
                    throw new IOException("Invalid length");
                }
                if (readByte3 != -31) {
                    HashMap[] hashMapArr = this.f14763f;
                    if (readByte3 != -2) {
                        switch (readByte3) {
                            default:
                                switch (readByte3) {
                                    default:
                                        switch (readByte3) {
                                            default:
                                                switch (readByte3) {
                                                }
                                            case -55:
                                            case -54:
                                            case -53:
                                                bVar.c(1);
                                                hashMapArr[i6].put(i6 != 4 ? "ImageLength" : "ThumbnailImageLength", d.c(bVar.readUnsignedShort(), this.f14765h));
                                                hashMapArr[i6].put(i6 != 4 ? "ImageWidth" : "ThumbnailImageWidth", d.c(bVar.readUnsignedShort(), this.f14765h));
                                                i12 = readUnsignedShort - 7;
                                                break;
                                        }
                                    case -59:
                                    case -58:
                                    case -57:
                                        break;
                                }
                            case -64:
                            case -63:
                            case -62:
                            case -61:
                                break;
                        }
                        if (i12 >= 0) {
                            throw new IOException("Invalid length");
                        }
                        bVar.c(i12);
                        i11 = i13 + i12;
                        b10 = -1;
                    } else {
                        byte[] bArr = new byte[i12];
                        bVar.readFully(bArr);
                        if (b("UserComment") == null) {
                            hashMapArr[1].put("UserComment", d.b(new String(bArr, f14749d0)));
                        }
                    }
                } else {
                    byte[] bArr2 = new byte[i12];
                    bVar.readFully(bArr2);
                    int i14 = i13 + i12;
                    byte[] bArr3 = f14750e0;
                    if (ta.a.J(bArr2, bArr3)) {
                        byte[] copyOfRange = Arrays.copyOfRange(bArr2, bArr3.length, i12);
                        this.f14771p = i5 + i13 + bArr3.length;
                        x(copyOfRange, i6);
                        G(new b(copyOfRange));
                    } else {
                        byte[] bArr4 = f14751f0;
                        if (ta.a.J(bArr2, bArr4)) {
                            int length = i13 + bArr4.length;
                            byte[] copyOfRange2 = Arrays.copyOfRange(bArr2, bArr4.length, i12);
                            i10 = i14;
                            this.f14775t = new d(length, copyOfRange2, 1, copyOfRange2.length);
                            this.f14776u = true;
                            i13 = i10;
                        }
                    }
                    i10 = i14;
                    i13 = i10;
                }
                i12 = 0;
                if (i12 >= 0) {
                }
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:113:0x0062, code lost:
    
        if (r9 < 16) goto L16;
     */
    /* JADX WARN: Code restructure failed: missing block: B:161:0x00ec, code lost:
    
        if (r8 != null) goto L34;
     */
    /* JADX WARN: Removed duplicated region for block: B:23:0x00f1 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:25:0x00f2 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:36:0x012b A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:37:0x012d A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:46:0x0163 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:47:0x0166  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int g(BufferedInputStream bufferedInputStream) {
        b bVar;
        int i5;
        b bVar2;
        int i6;
        b bVar3;
        b bVar4;
        int i10;
        b bVar5;
        b bVar6;
        int i11;
        int i12;
        long readInt;
        byte[] bArr;
        long j;
        bufferedInputStream.mark(5000);
        byte[] bArr2 = new byte[5000];
        bufferedInputStream.read(bArr2);
        bufferedInputStream.reset();
        int i13 = 0;
        while (true) {
            byte[] bArr3 = A;
            if (i13 >= bArr3.length) {
                return 4;
            }
            if (bArr2[i13] != bArr3[i13]) {
                byte[] bytes = "FUJIFILMCCD-RAW".getBytes(Charset.defaultCharset());
                for (int i14 = 0; i14 < bytes.length; i14++) {
                    if (bArr2[i14] != bytes[i14]) {
                        int i15 = 1;
                        try {
                            bVar2 = new b(bArr2);
                            try {
                                try {
                                    readInt = bVar2.readInt();
                                    bArr = new byte[4];
                                    bVar2.readFully(bArr);
                                } catch (Exception e9) {
                                    e = e9;
                                    i5 = 0;
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                bVar = bVar2;
                                if (bVar != null) {
                                    bVar.close();
                                }
                                throw th;
                            }
                        } catch (Exception e10) {
                            e = e10;
                            i5 = 0;
                            bVar2 = null;
                        } catch (Throwable th3) {
                            th = th3;
                            bVar = null;
                        }
                        if (Arrays.equals(bArr, B)) {
                            if (readInt == 1) {
                                readInt = bVar2.readLong();
                                j = 16;
                            } else {
                                j = 8;
                            }
                            i5 = 0;
                            long j5 = 5000;
                            if (readInt > j5) {
                                readInt = j5;
                            }
                            long j7 = readInt - j;
                            if (j7 >= 8) {
                                try {
                                    byte[] bArr4 = new byte[4];
                                    boolean z5 = false;
                                    boolean z6 = false;
                                    boolean z7 = false;
                                    for (long j10 = 0; j10 < j7 / 4; j10++) {
                                        try {
                                            bVar2.readFully(bArr4);
                                            if (j10 != 1) {
                                                if (Arrays.equals(bArr4, C)) {
                                                    z5 = true;
                                                } else if (Arrays.equals(bArr4, D)) {
                                                    z6 = true;
                                                } else if (Arrays.equals(bArr4, E) || Arrays.equals(bArr4, F)) {
                                                    z7 = true;
                                                }
                                                if (z5) {
                                                    if (z6) {
                                                        bVar2.close();
                                                        i6 = 12;
                                                        break;
                                                    }
                                                    if (z7) {
                                                        bVar2.close();
                                                        i6 = 15;
                                                        break;
                                                    }
                                                } else {
                                                    continue;
                                                }
                                            }
                                        } catch (EOFException unused) {
                                        }
                                    }
                                } catch (Exception e11) {
                                    e = e11;
                                    if (f14754v) {
                                        Log.d("ExifInterface", "Exception parsing HEIF file type box.", e);
                                    }
                                }
                            }
                            bVar2.close();
                            i6 = i5;
                            if (i6 == 0) {
                                return i6;
                            }
                            try {
                                bVar4 = new b(bArr2);
                                try {
                                    ByteOrder w5 = w(bVar4);
                                    this.f14765h = w5;
                                    bVar4.f14735i = w5;
                                    short readShort = bVar4.readShort();
                                    i10 = (readShort == 20306 || readShort == 21330) ? 1 : i5;
                                    bVar4.close();
                                } catch (Exception unused2) {
                                    if (bVar4 != null) {
                                        bVar4.close();
                                    }
                                    i10 = i5;
                                    if (i10 == 0) {
                                    }
                                } catch (Throwable th4) {
                                    th = th4;
                                    bVar3 = bVar4;
                                    if (bVar3 != null) {
                                        bVar3.close();
                                    }
                                    throw th;
                                }
                            } catch (Exception unused3) {
                                bVar4 = null;
                            } catch (Throwable th5) {
                                th = th5;
                                bVar3 = null;
                            }
                            if (i10 == 0) {
                                return 7;
                            }
                            try {
                                b bVar7 = new b(bArr2);
                                try {
                                    ByteOrder w6 = w(bVar7);
                                    this.f14765h = w6;
                                    bVar7.f14735i = w6;
                                    i11 = bVar7.readShort() == 85 ? 1 : i5;
                                    bVar7.close();
                                } catch (Exception unused4) {
                                    bVar6 = bVar7;
                                    if (bVar6 != null) {
                                        bVar6.close();
                                    }
                                    i11 = i5;
                                    if (i11 == 0) {
                                    }
                                } catch (Throwable th6) {
                                    th = th6;
                                    bVar5 = bVar7;
                                    if (bVar5 != null) {
                                        bVar5.close();
                                    }
                                    throw th;
                                }
                            } catch (Exception unused5) {
                                bVar6 = null;
                            } catch (Throwable th7) {
                                th = th7;
                                bVar5 = null;
                            }
                            if (i11 == 0) {
                                return 10;
                            }
                            int i16 = i5;
                            while (true) {
                                byte[] bArr5 = I;
                                if (i16 >= bArr5.length) {
                                    i12 = 1;
                                    break;
                                }
                                if (bArr2[i16] != bArr5[i16]) {
                                    i12 = i5;
                                    break;
                                }
                                i16++;
                            }
                            if (i12 != 0) {
                                return 13;
                            }
                            int i17 = i5;
                            while (true) {
                                byte[] bArr6 = K;
                                if (i17 >= bArr6.length) {
                                    int i18 = i5;
                                    while (true) {
                                        byte[] bArr7 = L;
                                        if (i18 >= bArr7.length) {
                                            break;
                                        }
                                        if (bArr2[bArr6.length + i18 + 4] != bArr7[i18]) {
                                            break;
                                        }
                                        i18++;
                                    }
                                } else {
                                    if (bArr2[i17] != bArr6[i17]) {
                                        break;
                                    }
                                    i17++;
                                }
                            }
                            i15 = i5;
                            if (i15 != 0) {
                                return 14;
                            }
                            return i5;
                        }
                        bVar2.close();
                        i5 = 0;
                        i6 = 0;
                        if (i6 == 0) {
                        }
                    }
                }
                return 9;
            }
            i13++;
        }
    }

    public final void h(g gVar) {
        int i5;
        int i6;
        k(gVar);
        HashMap[] hashMapArr = this.f14763f;
        d dVar = (d) hashMapArr[1].get("MakerNote");
        if (dVar != null) {
            g gVar2 = new g(dVar.f14742d);
            gVar2.f14735i = this.f14765h;
            byte[] bArr = G;
            byte[] bArr2 = new byte[bArr.length];
            gVar2.readFully(bArr2);
            gVar2.f(0L);
            byte[] bArr3 = H;
            byte[] bArr4 = new byte[bArr3.length];
            gVar2.readFully(bArr4);
            if (Arrays.equals(bArr2, bArr)) {
                gVar2.f(8L);
            } else if (Arrays.equals(bArr4, bArr3)) {
                gVar2.f(12L);
            }
            y(gVar2, 6);
            d dVar2 = (d) hashMapArr[7].get("PreviewImageStart");
            d dVar3 = (d) hashMapArr[7].get("PreviewImageLength");
            if (dVar2 != null && dVar3 != null) {
                hashMapArr[5].put("JPEGInterchangeFormat", dVar2);
                hashMapArr[5].put("JPEGInterchangeFormatLength", dVar3);
            }
            d dVar4 = (d) hashMapArr[8].get("AspectFrame");
            if (dVar4 != null) {
                int[] iArr = (int[]) dVar4.k(this.f14765h);
                if (iArr == null || iArr.length != 4) {
                    Log.w("ExifInterface", "Invalid aspect frame values. frame=" + Arrays.toString(iArr));
                    return;
                }
                int i10 = iArr[2];
                int i11 = iArr[0];
                if (i10 <= i11 || (i5 = iArr[3]) <= (i6 = iArr[1])) {
                    return;
                }
                int i12 = (i10 - i11) + 1;
                int i13 = (i5 - i6) + 1;
                if (i12 < i13) {
                    int i14 = i12 + i13;
                    i13 = i14 - i13;
                    i12 = i14 - i13;
                }
                d f2 = d.f(i12, this.f14765h);
                d f10 = d.f(i13, this.f14765h);
                hashMapArr[0].put("ImageWidth", f2);
                hashMapArr[0].put("ImageLength", f10);
            }
        }
    }

    public final void i(b bVar) {
        if (f14754v) {
            Log.d("ExifInterface", "getPngAttributes starting with: " + bVar);
        }
        bVar.f14735i = ByteOrder.BIG_ENDIAN;
        int i5 = bVar.f14734e;
        bVar.c(I.length);
        boolean z5 = false;
        boolean z6 = false;
        while (true) {
            if (z5 && z6) {
                break;
            }
            try {
                int readInt = bVar.readInt();
                int readInt2 = bVar.readInt();
                int i6 = bVar.f14734e;
                int i10 = i6 + readInt + 4;
                int i11 = i6 - i5;
                if (i11 == 16 && readInt2 != 1229472850) {
                    throw new IOException("Encountered invalid PNG file--IHDR chunk should appear as the first chunk");
                }
                if (readInt2 == 1229278788) {
                    break;
                }
                if (readInt2 == 1700284774 && !z5) {
                    this.f14771p = i11;
                    byte[] bArr = new byte[readInt];
                    bVar.readFully(bArr);
                    int readInt3 = bVar.readInt();
                    CRC32 crc32 = new CRC32();
                    crc32.update(readInt2 >>> 24);
                    crc32.update(readInt2 >>> 16);
                    crc32.update(readInt2 >>> 8);
                    crc32.update(readInt2);
                    crc32.update(bArr);
                    if (((int) crc32.getValue()) != readInt3) {
                        throw new IOException("Encountered invalid CRC value for PNG-EXIF chunk.\n recorded CRC value: " + readInt3 + ", calculated CRC value: " + crc32.getValue());
                    }
                    x(bArr, 0);
                    J();
                    G(new b(bArr));
                    z5 = true;
                } else if (readInt2 == 1767135348 && !z6) {
                    byte[] bArr2 = J;
                    if (readInt >= bArr2.length) {
                        int length = bArr2.length;
                        byte[] bArr3 = new byte[length];
                        bVar.readFully(bArr3);
                        if (Arrays.equals(bArr3, bArr2)) {
                            int i12 = bVar.f14734e - i5;
                            int i13 = readInt - length;
                            byte[] bArr4 = new byte[i13];
                            bVar.readFully(bArr4);
                            this.f14775t = new d(i12, bArr4, 1, i13);
                            z6 = true;
                        }
                    }
                }
                bVar.c(i10 - bVar.f14734e);
            } catch (EOFException e9) {
                throw new IOException("Encountered corrupt PNG file.", e9);
            }
        }
        this.f14776u = z6;
    }

    public final void j(b bVar) {
        boolean z5 = f14754v;
        if (z5) {
            Log.d("ExifInterface", "getRafAttributes starting with: " + bVar);
        }
        bVar.c(84);
        byte[] bArr = new byte[4];
        byte[] bArr2 = new byte[4];
        byte[] bArr3 = new byte[4];
        bVar.readFully(bArr);
        bVar.readFully(bArr2);
        bVar.readFully(bArr3);
        int i5 = ByteBuffer.wrap(bArr).getInt();
        int i6 = ByteBuffer.wrap(bArr2).getInt();
        int i10 = ByteBuffer.wrap(bArr3).getInt();
        byte[] bArr4 = new byte[i6];
        bVar.c(i5 - bVar.f14734e);
        bVar.readFully(bArr4);
        f(new b(bArr4), i5, 5);
        bVar.c(i10 - bVar.f14734e);
        bVar.f14735i = ByteOrder.BIG_ENDIAN;
        int readInt = bVar.readInt();
        if (z5) {
            k0.d.q(readInt, "numberOfDirectoryEntry: ", "ExifInterface");
        }
        for (int i11 = 0; i11 < readInt; i11++) {
            int readUnsignedShort = bVar.readUnsignedShort();
            int readUnsignedShort2 = bVar.readUnsignedShort();
            if (readUnsignedShort == W.a) {
                short readShort = bVar.readShort();
                short readShort2 = bVar.readShort();
                d f2 = d.f(readShort, this.f14765h);
                d f10 = d.f(readShort2, this.f14765h);
                HashMap[] hashMapArr = this.f14763f;
                hashMapArr[0].put("ImageLength", f2);
                hashMapArr[0].put("ImageWidth", f10);
                if (z5) {
                    Log.d("ExifInterface", "Updated to length: " + ((int) readShort) + ", width: " + ((int) readShort2));
                    return;
                }
                return;
            }
            bVar.c(readUnsignedShort2);
        }
    }

    public final void k(g gVar) {
        u(gVar);
        y(gVar, 0);
        I(gVar, 0);
        I(gVar, 5);
        I(gVar, 4);
        J();
        if (this.f14761d == 8) {
            HashMap[] hashMapArr = this.f14763f;
            d dVar = (d) hashMapArr[1].get("MakerNote");
            if (dVar != null) {
                g gVar2 = new g(dVar.f14742d);
                gVar2.f14735i = this.f14765h;
                gVar2.c(6);
                y(gVar2, 9);
                d dVar2 = (d) hashMapArr[9].get("ColorSpace");
                if (dVar2 != null) {
                    hashMapArr[1].put("ColorSpace", dVar2);
                }
            }
        }
    }

    public final void l(g gVar) {
        if (f14754v) {
            Log.d("ExifInterface", "getRw2Attributes starting with: " + gVar);
        }
        k(gVar);
        HashMap[] hashMapArr = this.f14763f;
        d dVar = (d) hashMapArr[0].get("JpgFromRaw");
        if (dVar != null) {
            f(new b(dVar.f14742d), (int) dVar.f14741c, 5);
        }
        d dVar2 = (d) hashMapArr[0].get("ISO");
        d dVar3 = (d) hashMapArr[1].get("PhotographicSensitivity");
        if (dVar2 == null || dVar3 != null) {
            return;
        }
        hashMapArr[1].put("PhotographicSensitivity", dVar2);
    }

    public final boolean m(g gVar) {
        byte[] bArr = f14750e0;
        byte[] bArr2 = new byte[bArr.length];
        gVar.readFully(bArr2);
        if (!Arrays.equals(bArr2, bArr)) {
            Log.w("ExifInterface", "Given data is not EXIF-only.");
            return false;
        }
        byte[] bArr3 = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];
        int i5 = 0;
        while (true) {
            if (i5 == bArr3.length) {
                bArr3 = Arrays.copyOf(bArr3, bArr3.length * 2);
            }
            int read = gVar.f14733d.read(bArr3, i5, bArr3.length - i5);
            if (read == -1) {
                byte[] copyOf = Arrays.copyOf(bArr3, i5);
                this.f14771p = bArr.length;
                x(copyOf, 0);
                return true;
            }
            i5 += read;
            gVar.f14734e += read;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0078 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:31:0x0096 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:48:0x00a4 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r3v1, types: [byte[]] */
    /* JADX WARN: Type inference failed for: r3v12 */
    /* JADX WARN: Type inference failed for: r3v13 */
    /* JADX WARN: Type inference failed for: r3v17 */
    /* JADX WARN: Type inference failed for: r3v2 */
    /* JADX WARN: Type inference failed for: r3v4 */
    /* JADX WARN: Type inference failed for: r3v5, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r3v6, types: [android.content.res.AssetManager$AssetInputStream, java.io.Closeable, java.io.InputStream] */
    /* JADX WARN: Type inference failed for: r3v7, types: [java.io.Closeable, java.io.InputStream] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final byte[] n() {
        FileDescriptor fileDescriptor;
        Exception e9;
        FileDescriptor fileDescriptor2;
        FileInputStream fileInputStream;
        Closeable closeable = null;
        if (this.f14766i) {
            ?? r32 = this.f14769n;
            try {
                if (r32 != 0) {
                    return r32;
                }
                try {
                    r32 = this.f14760c;
                    try {
                        if (r32 != 0) {
                            try {
                                if (!r32.markSupported()) {
                                    Log.d("ExifInterface", "Cannot read thumbnail from inputstream without mark/reset support");
                                    ta.a.l(r32);
                                    return null;
                                }
                                r32.reset();
                                fileInputStream = r32;
                            } catch (Exception e10) {
                                e9 = e10;
                                fileDescriptor2 = null;
                                Log.d("ExifInterface", "Encountered exception while getting thumbnail", e9);
                                ta.a.l(r32);
                                if (fileDescriptor2 != null) {
                                }
                                return null;
                            } catch (Throwable th2) {
                                th = th2;
                                fileDescriptor = null;
                                closeable = r32;
                                ta.a.l(closeable);
                                if (fileDescriptor != null) {
                                    try {
                                        Os.close(fileDescriptor);
                                    } catch (ErrnoException e11) {
                                        Log.e("ExifInterfaceUtils", "Error closing fd.", e11);
                                    }
                                }
                                throw th;
                            }
                        } else {
                            if (this.a == null) {
                                FileDescriptor dup = Os.dup(this.f14759b);
                                try {
                                    Os.lseek(dup, 0L, OsConstants.SEEK_SET);
                                    fileDescriptor2 = dup;
                                    r32 = new FileInputStream(dup);
                                    b bVar = new b((InputStream) r32);
                                    bVar.c(this.f14767l + this.f14771p);
                                    byte[] bArr = new byte[this.f14768m];
                                    bVar.readFully(bArr);
                                    this.f14769n = bArr;
                                    ta.a.l(r32);
                                    if (fileDescriptor2 != null) {
                                        try {
                                            Os.close(fileDescriptor2);
                                            return bArr;
                                        } catch (ErrnoException e12) {
                                            Log.e("ExifInterfaceUtils", "Error closing fd.", e12);
                                        }
                                    }
                                    return bArr;
                                } catch (Exception e13) {
                                    e9 = e13;
                                    fileDescriptor2 = dup;
                                    r32 = 0;
                                    Log.d("ExifInterface", "Encountered exception while getting thumbnail", e9);
                                    ta.a.l(r32);
                                    if (fileDescriptor2 != null) {
                                    }
                                    return null;
                                } catch (Throwable th3) {
                                    th = th3;
                                    fileDescriptor = dup;
                                    ta.a.l(closeable);
                                    if (fileDescriptor != null) {
                                    }
                                    throw th;
                                }
                            }
                            fileInputStream = new FileInputStream(this.a);
                        }
                        b bVar2 = new b((InputStream) r32);
                        bVar2.c(this.f14767l + this.f14771p);
                        byte[] bArr2 = new byte[this.f14768m];
                        bVar2.readFully(bArr2);
                        this.f14769n = bArr2;
                        ta.a.l(r32);
                        if (fileDescriptor2 != null) {
                        }
                        return bArr2;
                    } catch (Exception e14) {
                        e9 = e14;
                        Log.d("ExifInterface", "Encountered exception while getting thumbnail", e9);
                        ta.a.l(r32);
                        if (fileDescriptor2 != null) {
                            try {
                                Os.close(fileDescriptor2);
                            } catch (ErrnoException e15) {
                                Log.e("ExifInterfaceUtils", "Error closing fd.", e15);
                            }
                        }
                        return null;
                    }
                    fileDescriptor2 = null;
                    r32 = fileInputStream;
                } catch (Exception e16) {
                    r32 = 0;
                    e9 = e16;
                    fileDescriptor2 = null;
                } catch (Throwable th4) {
                    th = th4;
                    fileDescriptor = null;
                }
            } catch (Throwable th5) {
                th = th5;
            }
        }
        return null;
    }

    public final void o(b bVar) {
        if (f14754v) {
            Log.d("ExifInterface", "getWebpAttributes starting with: " + bVar);
        }
        bVar.f14735i = ByteOrder.LITTLE_ENDIAN;
        bVar.c(K.length);
        int readInt = bVar.readInt() + 8;
        byte[] bArr = L;
        bVar.c(bArr.length);
        int length = bArr.length + 8;
        while (true) {
            try {
                byte[] bArr2 = new byte[4];
                bVar.readFully(bArr2);
                int readInt2 = bVar.readInt();
                int i5 = length + 8;
                if (Arrays.equals(M, bArr2)) {
                    byte[] bArr3 = new byte[readInt2];
                    bVar.readFully(bArr3);
                    byte[] bArr4 = f14750e0;
                    if (ta.a.J(bArr3, bArr4)) {
                        bArr3 = Arrays.copyOfRange(bArr3, bArr4.length, readInt2);
                    }
                    this.f14771p = i5;
                    x(bArr3, 0);
                    G(new b(bArr3));
                    return;
                }
                if (readInt2 % 2 == 1) {
                    readInt2++;
                }
                length = i5 + readInt2;
                if (length == readInt) {
                    return;
                }
                if (length > readInt) {
                    throw new IOException("Encountered WebP file with invalid chunk size");
                }
                bVar.c(readInt2);
            } catch (EOFException e9) {
                throw new IOException("Encountered corrupt WebP file.", e9);
            }
        }
    }

    public final void q(b bVar, HashMap hashMap) {
        d dVar = (d) hashMap.get("JPEGInterchangeFormat");
        d dVar2 = (d) hashMap.get("JPEGInterchangeFormatLength");
        if (dVar == null || dVar2 == null) {
            return;
        }
        int i5 = dVar.i(this.f14765h);
        int i6 = dVar2.i(this.f14765h);
        if (this.f14761d == 7) {
            i5 += this.f14772q;
        }
        if (i5 > 0 && i6 > 0) {
            this.f14766i = true;
            if (this.a == null && this.f14760c == null && this.f14759b == null) {
                byte[] bArr = new byte[i6];
                bVar.c(i5);
                bVar.readFully(bArr);
                this.f14769n = bArr;
            }
            this.f14767l = i5;
            this.f14768m = i6;
        }
        if (f14754v) {
            Log.d("ExifInterface", "Setting thumbnail attributes with offset: " + i5 + ", length: " + i6);
        }
    }

    public final void r(String str) {
        FileInputStream fileInputStream;
        boolean z5;
        if (str == null) {
            throw new NullPointerException("filename cannot be null");
        }
        FileInputStream fileInputStream2 = null;
        this.f14760c = null;
        this.a = str;
        try {
            fileInputStream = new FileInputStream(str);
        } catch (Throwable th2) {
            th = th2;
        }
        try {
            try {
                Os.lseek(fileInputStream.getFD(), 0L, OsConstants.SEEK_CUR);
                z5 = true;
            } catch (Exception unused) {
                if (f14754v) {
                    Log.d("ExifInterface", "The file descriptor for the given input is not seekable");
                }
                z5 = false;
            }
            if (z5) {
                this.f14759b = fileInputStream.getFD();
            } else {
                this.f14759b = null;
            }
            t(fileInputStream);
            ta.a.l(fileInputStream);
        } catch (Throwable th3) {
            th = th3;
            fileInputStream2 = fileInputStream;
            ta.a.l(fileInputStream2);
            throw th;
        }
    }

    public final boolean s(HashMap hashMap) {
        d dVar = (d) hashMap.get("ImageLength");
        d dVar2 = (d) hashMap.get("ImageWidth");
        if (dVar == null || dVar2 == null) {
            return false;
        }
        return dVar.i(this.f14765h) <= 512 && dVar2.i(this.f14765h) <= 512;
    }

    /* JADX WARN: Removed duplicated region for block: B:30:0x00a6  */
    /* JADX WARN: Removed duplicated region for block: B:32:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void t(InputStream inputStream) {
        boolean z5 = f14754v;
        for (int i5 = 0; i5 < X.length; i5++) {
            try {
                try {
                    this.f14763f[i5] = new HashMap();
                } finally {
                    a();
                    if (z5) {
                        v();
                    }
                }
            } catch (IOException | UnsupportedOperationException e9) {
                if (z5) {
                    Log.w("ExifInterface", "Invalid image: ExifInterface got an unsupported image format file (ExifInterface supports JPEG and some RAW image formats only) or a corrupted JPEG file to ExifInterface.", e9);
                }
                a();
                if (z5) {
                    v();
                    return;
                }
                return;
            }
        }
        boolean z6 = this.f14762e;
        if (!z6) {
            BufferedInputStream bufferedInputStream = new BufferedInputStream(inputStream, 5000);
            this.f14761d = g(bufferedInputStream);
            inputStream = bufferedInputStream;
        }
        int i6 = this.f14761d;
        if (i6 != 4 && i6 != 9 && i6 != 13 && i6 != 14) {
            g gVar = new g(inputStream);
            if (!z6) {
                int i10 = this.f14761d;
                if (i10 != 12 && i10 != 15) {
                    if (i10 == 7) {
                        h(gVar);
                    } else if (i10 == 10) {
                        l(gVar);
                    } else {
                        k(gVar);
                    }
                }
                e(gVar, i10);
            } else if (!m(gVar)) {
                if (z5) {
                    return;
                } else {
                    return;
                }
            }
            gVar.f(this.f14771p);
            G(gVar);
            a();
            if (z5) {
                return;
            }
            v();
            return;
        }
        b bVar = new b(inputStream);
        int i11 = this.f14761d;
        if (i11 == 4) {
            f(bVar, 0, 0);
        } else if (i11 == 13) {
            i(bVar);
        } else if (i11 == 9) {
            j(bVar);
        } else if (i11 == 14) {
            o(bVar);
        }
        a();
        if (z5) {
        }
    }

    public final void u(g gVar) {
        ByteOrder w5 = w(gVar);
        this.f14765h = w5;
        gVar.f14735i = w5;
        int readUnsignedShort = gVar.readUnsignedShort();
        int i5 = this.f14761d;
        if (i5 != 7 && i5 != 10 && readUnsignedShort != 42) {
            throw new IOException("Invalid start code: " + Integer.toHexString(readUnsignedShort));
        }
        int readInt = gVar.readInt();
        if (readInt < 8) {
            throw new IOException(k0.d.i(readInt, "Invalid first Ifd offset: "));
        }
        int i6 = readInt - 8;
        if (i6 > 0) {
            gVar.c(i6);
        }
    }

    public final void v() {
        int i5 = 0;
        while (true) {
            HashMap[] hashMapArr = this.f14763f;
            if (i5 >= hashMapArr.length) {
                return;
            }
            StringBuilder r5 = a3.e.r(i5, "The size of tag group[", "]: ");
            r5.append(hashMapArr[i5].size());
            Log.d("ExifInterface", r5.toString());
            for (Map.Entry entry : hashMapArr[i5].entrySet()) {
                d dVar = (d) entry.getValue();
                Log.d("ExifInterface", "tagName: " + ((String) entry.getKey()) + ", tagType: " + dVar.toString() + ", tagValue: '" + dVar.j(this.f14765h) + "'");
            }
            i5++;
        }
    }

    public final void x(byte[] bArr, int i5) {
        g gVar = new g(bArr);
        u(gVar);
        y(gVar, i5);
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x011f  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0129  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x01fb  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x025b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void y(g gVar, int i5) {
        HashMap[] hashMapArr;
        HashSet hashSet;
        boolean z5;
        short s2;
        HashMap[] hashMapArr2;
        long j;
        long j5;
        boolean z6;
        int i6;
        long j7;
        int i10;
        e eVar;
        HashSet hashSet2;
        String str;
        int readUnsignedShort;
        long j10;
        int i11 = i5;
        int i12 = gVar.f14734e;
        int i13 = gVar.f14737w;
        Integer valueOf = Integer.valueOf(i12);
        HashSet hashSet3 = this.f14764g;
        hashSet3.add(valueOf);
        short readShort = gVar.readShort();
        String str2 = "ExifInterface";
        boolean z7 = f14754v;
        if (z7) {
            k0.d.q(readShort, "numberOfDirectoryEntry: ", "ExifInterface");
        }
        if (readShort <= 0) {
            return;
        }
        short s5 = 0;
        while (true) {
            hashMapArr = this.f14763f;
            if (s5 >= readShort) {
                break;
            }
            int readUnsignedShort2 = gVar.readUnsignedShort();
            int readUnsignedShort3 = gVar.readUnsignedShort();
            int readInt = gVar.readInt();
            long j11 = gVar.f14734e + 4;
            short s7 = readShort;
            e eVar2 = (e) Z[i11].get(Integer.valueOf(readUnsignedShort2));
            if (z7) {
                z5 = z7;
                s2 = s5;
                hashMapArr2 = hashMapArr;
                hashSet = hashSet3;
                Log.d(str2, String.format("ifdType: %d, tagNumber: %d, tagName: %s, dataFormat: %d, numberOfComponents: %d", Integer.valueOf(i11), Integer.valueOf(readUnsignedShort2), eVar2 != null ? eVar2.f14743b : null, Integer.valueOf(readUnsignedShort3), Integer.valueOf(readInt)));
            } else {
                hashSet = hashSet3;
                z5 = z7;
                s2 = s5;
                hashMapArr2 = hashMapArr;
            }
            if (eVar2 != null) {
                if (readUnsignedShort3 > 0) {
                    if (readUnsignedShort3 < U.length) {
                        int i14 = eVar2.f14744c;
                        if (i14 == 7 || readUnsignedShort3 == 7 || i14 == readUnsignedShort3 || (i6 = eVar2.f14745d) == readUnsignedShort3 || (((i14 == 4 || i6 == 4) && readUnsignedShort3 == 3) || (((i14 == 9 || i6 == 9) && readUnsignedShort3 == 8) || ((i14 == 12 || i6 == 12) && readUnsignedShort3 == 11)))) {
                            if (readUnsignedShort3 == 7) {
                                readUnsignedShort3 = i14;
                            }
                            j = j11;
                            j5 = readInt * r13[readUnsignedShort3];
                            if (j5 < 0 || j5 > 2147483647L) {
                                if (z5) {
                                    k0.d.q(readInt, "Skip the tag entry since the number of components is invalid: ", str2);
                                }
                                z6 = false;
                                if (z6) {
                                    gVar.f(j);
                                    str = str2;
                                    hashSet2 = hashSet;
                                } else {
                                    long j12 = j;
                                    if (j5 > 4) {
                                        int readInt2 = gVar.readInt();
                                        if (z5) {
                                            k0.d.q(readInt2, "seek to data offset: ", str2);
                                        }
                                        i10 = readUnsignedShort2;
                                        if (this.f14761d == 7) {
                                            if ("MakerNote".equals(eVar2.f14743b)) {
                                                this.f14772q = readInt2;
                                            } else if (i11 == 6 && "ThumbnailImage".equals(eVar2.f14743b)) {
                                                this.f14773r = readInt2;
                                                this.f14774s = readInt;
                                                d f2 = d.f(6, this.f14765h);
                                                j7 = j12;
                                                d c6 = d.c(this.f14773r, this.f14765h);
                                                eVar = eVar2;
                                                d c8 = d.c(this.f14774s, this.f14765h);
                                                hashMapArr2[4].put("Compression", f2);
                                                hashMapArr2[4].put("JPEGInterchangeFormat", c6);
                                                hashMapArr2[4].put("JPEGInterchangeFormatLength", c8);
                                                gVar.f(readInt2);
                                            }
                                        }
                                        eVar = eVar2;
                                        j7 = j12;
                                        gVar.f(readInt2);
                                    } else {
                                        j7 = j12;
                                        i10 = readUnsignedShort2;
                                        eVar = eVar2;
                                    }
                                    Integer num = (Integer) f14748c0.get(Integer.valueOf(i10));
                                    if (z5) {
                                        Log.d(str2, "nextIfdType: " + num + " byteCount: " + j5);
                                    }
                                    if (num != null) {
                                        if (readUnsignedShort3 != 3) {
                                            if (readUnsignedShort3 == 4) {
                                                j10 = gVar.readInt() & 4294967295L;
                                            } else if (readUnsignedShort3 == 8) {
                                                readUnsignedShort = gVar.readShort();
                                            } else if (readUnsignedShort3 == 9 || readUnsignedShort3 == 13) {
                                                readUnsignedShort = gVar.readInt();
                                            } else {
                                                j10 = -1;
                                            }
                                            if (z5) {
                                                Log.d(str2, String.format("Offset: %d, tagName: %s", Long.valueOf(j10), eVar.f14743b));
                                            }
                                            if (j10 > 0 || (i13 != -1 && j10 >= i13)) {
                                                hashSet2 = hashSet;
                                                if (z5) {
                                                    String j13 = k0.d.j(j10, "Skip jump into the IFD since its offset is invalid: ");
                                                    if (i13 != -1) {
                                                        j13 = j13 + " (total length: " + i13 + ")";
                                                    }
                                                    Log.d(str2, j13);
                                                }
                                            } else {
                                                hashSet2 = hashSet;
                                                if (!hashSet2.contains(Integer.valueOf((int) j10))) {
                                                    gVar.f(j10);
                                                    y(gVar, num.intValue());
                                                } else if (z5) {
                                                    Log.d(str2, "Skip jump into the IFD since it has already been read: IfdType " + num + " (at " + j10 + ")");
                                                }
                                            }
                                            gVar.f(j7);
                                            str = str2;
                                        } else {
                                            readUnsignedShort = gVar.readUnsignedShort();
                                        }
                                        j10 = readUnsignedShort;
                                        if (z5) {
                                        }
                                        if (j10 > 0) {
                                        }
                                        hashSet2 = hashSet;
                                        if (z5) {
                                        }
                                        gVar.f(j7);
                                        str = str2;
                                    } else {
                                        hashSet2 = hashSet;
                                        long j14 = j7;
                                        int i15 = gVar.f14734e + this.f14771p;
                                        byte[] bArr = new byte[(int) j5];
                                        gVar.readFully(bArr);
                                        str = str2;
                                        d dVar = new d(i15, bArr, readUnsignedShort3, readInt);
                                        HashMap hashMap = hashMapArr2[i5];
                                        String str3 = eVar.f14743b;
                                        hashMap.put(str3, dVar);
                                        if ("DNGVersion".equals(str3)) {
                                            this.f14761d = 3;
                                        }
                                        if ((("Make".equals(str3) || "Model".equals(str3)) && dVar.j(this.f14765h).contains("PENTAX")) || ("Compression".equals(str3) && dVar.i(this.f14765h) == 65535)) {
                                            this.f14761d = 8;
                                        }
                                        if (gVar.f14734e != j14) {
                                            gVar.f(j14);
                                        }
                                    }
                                }
                                s5 = (short) (s2 + 1);
                                i11 = i5;
                                str2 = str;
                                hashSet3 = hashSet2;
                                readShort = s7;
                                z7 = z5;
                            } else {
                                z6 = true;
                                if (z6) {
                                }
                                s5 = (short) (s2 + 1);
                                i11 = i5;
                                str2 = str;
                                hashSet3 = hashSet2;
                                readShort = s7;
                                z7 = z5;
                            }
                        } else if (z5) {
                            Log.d(str2, "Skip the tag entry since data format (" + T[readUnsignedShort3] + ") is unexpected for tag: " + eVar2.f14743b);
                        }
                    }
                }
                j = j11;
                if (z5) {
                    k0.d.q(readUnsignedShort3, "Skip the tag entry since data format is invalid: ", str2);
                }
                j5 = 0;
                z6 = false;
                if (z6) {
                }
                s5 = (short) (s2 + 1);
                i11 = i5;
                str2 = str;
                hashSet3 = hashSet2;
                readShort = s7;
                z7 = z5;
            } else if (z5) {
                k0.d.q(readUnsignedShort2, "Skip the tag entry since tag number is not defined: ", str2);
            }
            j = j11;
            j5 = 0;
            z6 = false;
            if (z6) {
            }
            s5 = (short) (s2 + 1);
            i11 = i5;
            str2 = str;
            hashSet3 = hashSet2;
            readShort = s7;
            z7 = z5;
        }
        HashSet hashSet4 = hashSet3;
        String str4 = str2;
        boolean z8 = z7;
        int readInt3 = gVar.readInt();
        if (z8) {
            Log.d(str4, String.format("nextIfdOffset: %d", Integer.valueOf(readInt3)));
        }
        long j15 = readInt3;
        if (j15 <= 0) {
            if (z8) {
                k0.d.q(readInt3, "Stop reading file since a wrong offset may cause an infinite loop: ", str4);
            }
        } else {
            if (hashSet4.contains(Integer.valueOf(readInt3))) {
                if (z8) {
                    k0.d.q(readInt3, "Stop reading file since re-reading an IFD may cause an infinite loop: ", str4);
                    return;
                }
                return;
            }
            gVar.f(j15);
            if (hashMapArr[4].isEmpty()) {
                y(gVar, 4);
            } else if (hashMapArr[5].isEmpty()) {
                y(gVar, 5);
            }
        }
    }

    public final void z(String str) {
        for (int i5 = 0; i5 < X.length; i5++) {
            this.f14763f[i5].remove(str);
        }
    }

    public h(String str) {
        e[][] eVarArr = X;
        this.f14763f = new HashMap[eVarArr.length];
        this.f14764g = new HashSet(eVarArr.length);
        this.f14765h = ByteOrder.BIG_ENDIAN;
        if (str != null) {
            r(str);
            return;
        }
        throw new NullPointerException("filename cannot be null");
    }

    public h(InputStream inputStream) {
        e[][] eVarArr = X;
        this.f14763f = new HashMap[eVarArr.length];
        this.f14764g = new HashSet(eVarArr.length);
        this.f14765h = ByteOrder.BIG_ENDIAN;
        if (inputStream != null) {
            this.a = null;
            this.f14762e = false;
            if (inputStream instanceof AssetManager.AssetInputStream) {
                this.f14760c = (AssetManager.AssetInputStream) inputStream;
                this.f14759b = null;
            } else {
                if (inputStream instanceof FileInputStream) {
                    FileInputStream fileInputStream = (FileInputStream) inputStream;
                    try {
                        Os.lseek(fileInputStream.getFD(), 0L, OsConstants.SEEK_CUR);
                        this.f14760c = null;
                        this.f14759b = fileInputStream.getFD();
                    } catch (Exception unused) {
                        if (f14754v) {
                            Log.d("ExifInterface", "The file descriptor for the given input is not seekable");
                        }
                    }
                }
                this.f14760c = null;
                this.f14759b = null;
            }
            t(inputStream);
            return;
        }
        throw new NullPointerException("inputStream cannot be null");
    }
}
