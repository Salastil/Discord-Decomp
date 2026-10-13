package com.github.luben.zstd.util;

import a3.e;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.chat.bridge.botuikit.a;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.security.AccessController;
import java.security.PrivilegedAction;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public enum Native {
    ;

    private static final String errorMsg = a.j(new StringBuilder("Unsupported OS/arch, cannot find "), resourceName(), " or load zstd-jni-1.5.7-3 from system libraries. Please try building from source the jar or providing libzstd-jni-1.5.7-3 in your system.");
    private static AtomicBoolean loaded = new AtomicBoolean(false);

    private static String libExtension() {
        return (osName().contains("os_x") || osName().contains("darwin")) ? "dylib" : osName().contains("win") ? "dll" : "so";
    }

    public static synchronized void load() {
        synchronized (Native.class) {
            try {
                String property = System.getProperty("ZstdTempFolder");
                if (property == null) {
                    load(null);
                } else {
                    load(new File(property));
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    private static void loadLibrary(final String str) {
        AccessController.doPrivileged(new PrivilegedAction<Void>() { // from class: com.github.luben.zstd.util.Native.1
            @Override // java.security.PrivilegedAction
            public Void run() {
                System.loadLibrary(str);
                return null;
            }
        });
    }

    private static void loadLibraryFile(final String str) {
        AccessController.doPrivileged(new PrivilegedAction<Void>() { // from class: com.github.luben.zstd.util.Native.2
            @Override // java.security.PrivilegedAction
            public Void run() {
                System.load(str);
                return null;
            }
        });
    }

    private static String osName() {
        String replace = System.getProperty("os.name").toLowerCase().replace(' ', '_');
        return replace.startsWith("win") ? "win" : replace.startsWith("mac") ? "darwin" : replace;
    }

    private static String resourceName() {
        String osName = osName();
        String property = System.getProperty("os.arch");
        if (osName.equals("darwin") && property.equals("amd64")) {
            property = "x86_64";
        }
        StringBuilder t5 = e.t("/", osName, "/", property, "/libzstd-jni-1.5.7-3.");
        t5.append(libExtension());
        return t5.toString();
    }

    public static Native valueOf(String str) {
        e.w(Enum.valueOf(Native.class, str));
        throw null;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:43:0x00d2 A[Catch: all -> 0x0026, IOException -> 0x00de, TryCatch #1 {, blocks: (B:4:0x0005, B:9:0x000f, B:11:0x001c, B:19:0x003a, B:96:0x0042, B:41:0x00cd, B:43:0x00d2, B:44:0x00d5, B:46:0x00db, B:71:0x014c, B:73:0x0151, B:75:0x0156, B:77:0x015c, B:78:0x015f, B:100:0x004f, B:101:0x0075, B:15:0x0029), top: B:3:0x0005, inners: #5, #11 }] */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00db A[Catch: all -> 0x0026, IOException -> 0x00de, TRY_LEAVE, TryCatch #1 {, blocks: (B:4:0x0005, B:9:0x000f, B:11:0x001c, B:19:0x003a, B:96:0x0042, B:41:0x00cd, B:43:0x00d2, B:44:0x00d5, B:46:0x00db, B:71:0x014c, B:73:0x0151, B:75:0x0156, B:77:0x015c, B:78:0x015f, B:100:0x004f, B:101:0x0075, B:15:0x0029), top: B:3:0x0005, inners: #5, #11 }] */
    /* JADX WARN: Removed duplicated region for block: B:49:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0151 A[Catch: all -> 0x0026, IOException -> 0x015f, TryCatch #1 {, blocks: (B:4:0x0005, B:9:0x000f, B:11:0x001c, B:19:0x003a, B:96:0x0042, B:41:0x00cd, B:43:0x00d2, B:44:0x00d5, B:46:0x00db, B:71:0x014c, B:73:0x0151, B:75:0x0156, B:77:0x015c, B:78:0x015f, B:100:0x004f, B:101:0x0075, B:15:0x0029), top: B:3:0x0005, inners: #5, #11 }] */
    /* JADX WARN: Removed duplicated region for block: B:75:0x0156 A[Catch: all -> 0x0026, IOException -> 0x015f, TryCatch #1 {, blocks: (B:4:0x0005, B:9:0x000f, B:11:0x001c, B:19:0x003a, B:96:0x0042, B:41:0x00cd, B:43:0x00d2, B:44:0x00d5, B:46:0x00db, B:71:0x014c, B:73:0x0151, B:75:0x0156, B:77:0x015c, B:78:0x015f, B:100:0x004f, B:101:0x0075, B:15:0x0029), top: B:3:0x0005, inners: #5, #11 }] */
    /* JADX WARN: Removed duplicated region for block: B:81:? A[Catch: all -> 0x0026, SYNTHETIC, TRY_ENTER, TryCatch #1 {, blocks: (B:4:0x0005, B:9:0x000f, B:11:0x001c, B:19:0x003a, B:96:0x0042, B:41:0x00cd, B:43:0x00d2, B:44:0x00d5, B:46:0x00db, B:71:0x014c, B:73:0x0151, B:75:0x0156, B:77:0x015c, B:78:0x015f, B:100:0x004f, B:101:0x0075, B:15:0x0029), top: B:3:0x0005, inners: #5, #11 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static synchronized void load(File file) {
        File file2;
        Throwable th2;
        FileOutputStream fileOutputStream;
        synchronized (Native.class) {
            if (loaded.get()) {
                return;
            }
            String resourceName = resourceName();
            String property = System.getProperty("ZstdNativePath");
            if (property != null) {
                loadLibraryFile(property);
                loaded.set(true);
                return;
            }
            try {
                Class.forName("org.osgi.framework.BundleEvent");
                loadLibrary("libzstd-jni-1.5.7-3");
                loaded.set(true);
            } catch (Throwable unused) {
                InputStream resourceAsStream = Native.class.getResourceAsStream(resourceName);
                if (resourceAsStream == null) {
                    try {
                        loadLibrary("zstd-jni-1.5.7-3");
                        loaded.set(true);
                        return;
                    } catch (UnsatisfiedLinkError e9) {
                        UnsatisfiedLinkError unsatisfiedLinkError = new UnsatisfiedLinkError(e9.getMessage() + ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE + errorMsg);
                        unsatisfiedLinkError.setStackTrace(e9.getStackTrace());
                        throw unsatisfiedLinkError;
                    }
                }
                FileOutputStream fileOutputStream2 = null;
                try {
                    File createTempFile = File.createTempFile("libzstd-jni-1.5.7-3", "." + libExtension(), file);
                    try {
                        createTempFile.deleteOnExit();
                        FileOutputStream fileOutputStream3 = new FileOutputStream(createTempFile);
                        try {
                            try {
                                byte[] bArr = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];
                                while (true) {
                                    int read = resourceAsStream.read(bArr);
                                    if (read == -1) {
                                        try {
                                            break;
                                        } catch (IOException unused2) {
                                            fileOutputStream2 = fileOutputStream3;
                                        }
                                    } else {
                                        fileOutputStream3.write(bArr, 0, read);
                                    }
                                }
                                fileOutputStream3.flush();
                                fileOutputStream3.close();
                                try {
                                    loadLibraryFile(createTempFile.getAbsolutePath());
                                } catch (UnsatisfiedLinkError e10) {
                                    try {
                                        loadLibrary("zstd-jni-1.5.7-3");
                                        loaded.set(true);
                                        resourceAsStream.close();
                                        if (fileOutputStream2 != null) {
                                            fileOutputStream2.close();
                                        }
                                        if (createTempFile.exists()) {
                                            return;
                                        }
                                        createTempFile.delete();
                                        return;
                                    } catch (UnsatisfiedLinkError e11) {
                                        UnsatisfiedLinkError unsatisfiedLinkError2 = new UnsatisfiedLinkError(e10.getMessage() + ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE + e11.getMessage() + ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE + errorMsg);
                                        unsatisfiedLinkError2.setStackTrace(e11.getStackTrace());
                                        throw unsatisfiedLinkError2;
                                    }
                                }
                                loaded.set(true);
                                try {
                                    resourceAsStream.close();
                                    if (fileOutputStream2 != null) {
                                    }
                                    if (createTempFile.exists()) {
                                    }
                                } catch (IOException unused3) {
                                }
                            } catch (IOException e12) {
                                fileOutputStream2 = createTempFile;
                                fileOutputStream = fileOutputStream3;
                                e = e12;
                                try {
                                    ExceptionInInitializerError exceptionInInitializerError = new ExceptionInInitializerError("Cannot unpack libzstd-jni-1.5.7-3: " + e.getMessage());
                                    exceptionInInitializerError.setStackTrace(e.getStackTrace());
                                    throw exceptionInInitializerError;
                                } catch (Throwable th3) {
                                    FileOutputStream fileOutputStream4 = fileOutputStream2;
                                    th2 = th3;
                                    file2 = fileOutputStream4;
                                    try {
                                        resourceAsStream.close();
                                        if (fileOutputStream != null) {
                                        }
                                        if (file2 != 0) {
                                        }
                                    } catch (IOException unused4) {
                                        throw th2;
                                    }
                                }
                            }
                        } catch (Throwable th4) {
                            th2 = th4;
                            file2 = createTempFile;
                            fileOutputStream = fileOutputStream3;
                            resourceAsStream.close();
                            if (fileOutputStream != null) {
                                fileOutputStream.close();
                            }
                            if (file2 != 0) {
                                if (file2.exists()) {
                                    file2.delete();
                                    throw th2;
                                }
                                throw th2;
                            }
                            throw th2;
                        }
                    } catch (IOException e13) {
                        e = e13;
                        FileOutputStream fileOutputStream5 = fileOutputStream2;
                        fileOutputStream2 = createTempFile;
                        fileOutputStream = fileOutputStream5;
                        ExceptionInInitializerError exceptionInInitializerError2 = new ExceptionInInitializerError("Cannot unpack libzstd-jni-1.5.7-3: " + e.getMessage());
                        exceptionInInitializerError2.setStackTrace(e.getStackTrace());
                        throw exceptionInInitializerError2;
                    } catch (Throwable th5) {
                        file2 = createTempFile;
                        fileOutputStream = fileOutputStream2;
                        th2 = th5;
                        resourceAsStream.close();
                        if (fileOutputStream != null) {
                        }
                        if (file2 != 0) {
                        }
                    }
                } catch (IOException e14) {
                    e = e14;
                    fileOutputStream = null;
                } catch (Throwable th6) {
                    file2 = 0;
                    th2 = th6;
                    fileOutputStream = null;
                }
            }
        }
    }
}
